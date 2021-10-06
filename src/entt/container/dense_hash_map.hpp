#ifndef ENTT_CONTAINER_DENSE_HASH_MAP_HPP
#define ENTT_CONTAINER_DENSE_HASH_MAP_HPP

#include <cstddef>
#include <functional>
#include <memory>
#include <utility>
#include "../config/config.h"

namespace entt {

template<
    typename Key, typename Type,
    typename Hash = std::hash<Key>,
    typename KeyEqual = std::equal_to<Key>,
    typename Allocator = std::allocator<std::pair<const Key, Type>>>
class dense_hash_map final {
    using key_type = Key;
    using mapped_type = Type;
    using value_type = std::pair<const Key, Type>;
    using size_type = std::size_t;
    using hasher = Hash;
    using key_equal = KeyEqual;
    using allocator_type = Allocator;
    using iterator = void *;                   // TODO
    using const_iterator = const void *;       // TODO
    using local_iterator = void *;             // TODO
    using const_local_iterator = const void *; // TODO

    dense_hash_map();                                         // TODO
    explicit dense_hash_map(const allocator_type &allocator); // TODO

    dense_hash_map(const dense_hash_map &other) ENTT_NOEXCEPT;                                  // TODO
    dense_hash_map(const dense_hash_map &other, const allocator_type &allocator) ENTT_NOEXCEPT; // TODO

    dense_hash_map(dense_hash_map &&other) ENTT_NOEXCEPT;                                  // TODO
    dense_hash_map(dense_hash_map &&other, const allocator_type &allocator) ENTT_NOEXCEPT; // TODO

    ~dense_hash_map(); // TODO

    dense_hash_map &operator=(const dense_hash_map &other) ENTT_NOEXCEPT; // TODO
    dense_hash_map &operator=(dense_hash_map &&other) ENTT_NOEXCEPT;      // TODO

    [[nodiscard]] constexpr allocator_type get_allocator() const ENTT_NOEXCEPT; // TODO

    [[nodiscard]] const_iterator cbegin() const ENTT_NOEXCEPT; // TODO
    [[nodiscard]] const_iterator begin() const ENTT_NOEXCEPT;  // TODO
    [[nodiscard]] iterator begin() ENTT_NOEXCEPT;              // TODO

    [[nodiscard]] const_iterator cend() const ENTT_NOEXCEPT; // TODO
    [[nodiscard]] const_iterator end() const ENTT_NOEXCEPT;  // TODO
    [[nodiscard]] iterator end() ENTT_NOEXCEPT;              // TODO

    [[nodiscard]] bool empty() const ENTT_NOEXCEPT;     // TODO
    [[nodiscard]] size_type size() const ENTT_NOEXCEPT; // TODO

    void clear() ENTT_NOEXCEPT; // TODO

    std::pair<iterator, bool> insert(const value_type &value); // TODO
    std::pair<iterator, bool> insert(value_type &&value);      // TODO

    template<typename It>
    void insert(It first, It last); // TODO

    std::pair<iterator, bool> insert_or_assign(const key_type &key, value_type &&value); // TODO
    std::pair<iterator, bool> insert_or_assign(key_type &&key, value_type &&value);      // TODO

    template<class... Args>
    std::pair<iterator, bool> emplace(Args &&...args); // TODO

    template<class... Args>
    std::pair<iterator, bool> try_emplace(const key_type &key, Args &&...args); // TODO

    template<class... Args>
    std::pair<iterator, bool> try_emplace(key_type &&key, Args &&...args); // TODO

    iterator erase(const_iterator pos);                        // TODO
    iterator erase(iterator pos);                              // TODO
    iterator erase(const_iterator first, const_iterator last); // TODO
    size_type erase(const key_type &key);                      // TODO

    void swap(dense_hash_map &other); // TODO

    Type &at(const Key &key);             // TODO
    const Type &at(const Key &key) const; // TODO

    Type &operator[](const Key &key); // TODO
    Type &operator[](Key &&key);      // TODO

    iterator find(const Key &key);             // TODO
    const_iterator find(const Key &key) const; // TODO

    bool contains(const Key &key) const; // TODO

    const_local_iterator cbegin(size_type index) const; // TODO
    const_local_iterator begin(size_type index) const;  // TODO
    local_iterator begin(size_type index);              // TODO

    const_local_iterator cend(size_type index) const; // TODO
    const_local_iterator end(size_type index) const;  // TODO
    local_iterator end(size_type index);              // TODO

    size_type bucket_count() const;               // TODO
    size_type bucket_size(size_type index) const; // TODO
    size_type bucket(const Key &key) const;       // TODO

    float load_factor() const;     // TODO
    void rehash(size_type count);  // TODO
    void reserve(size_type count); // TODO

    hasher hash_function() const; // TODO
    key_equal key_eq() const;     // TODO

private:
    // TODO
};

} // namespace entt

#endif
