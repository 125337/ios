@interface WeVisModelMapUtil : NSObject
+ (map<WeEffect::CORE_MODEL, std::string, std::less<WeEffect::CORE_MODEL>, std::allocator<std::pair<const WeEffect::CORE_MODEL, std::string>>>)toCppModelMap:(id)arg1;
+ (map<WeEffect::CORE_MODEL, std::string, std::less<WeEffect::CORE_MODEL>, std::allocator<std::pair<const WeEffect::CORE_MODEL, std::string>>>)getModelMap:(id)arg1;
@end
