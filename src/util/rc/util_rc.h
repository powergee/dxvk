#pragma once

#include <atomic>
#include <iostream>

namespace dxvk {
  
  /**
   * \brief Reference-counted object
   */
  class RcObject {
    
  public:
    
    /**
     * \brief Increments reference count
     * \returns New reference count
     */
    uint32_t incRef() {
      std::cout << "RC increments (" << this << "\n";
      return ++m_refCount;
    }
    
    /**
     * \brief Decrements reference count
     * \returns New reference count
     */
    uint32_t decRef() {
      std::cout << "RC decrements (" << this << "\n";
      return --m_refCount;
    }
    
  private:
    
    std::atomic<uint32_t> m_refCount = { 0u };
    
  };
  
}