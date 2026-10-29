@interface JSONModel : NSObject <AbstractJSONModelProtocol, NSSecureCoding>
{
    NSString * _description; // +0x8
}
+ (void)load;
+ (id)arrayOfModelsFromDictionaries:(id)arg1;
+ (id)arrayOfModelsFromData:(id)arg1 error:(id *)arg2;
+ (id)arrayOfModelsFromString:(id)arg1 error:(id *)arg2;
+ (id)arrayOfModelsFromDictionaries:(id)arg1 error:(id *)arg2;
+ (id)dictionaryOfModelsFromString:(id)arg1 error:(id *)arg2;
+ (id)dictionaryOfModelsFromData:(id)arg1 error:(id *)arg2;
+ (id)dictionaryOfModelsFromDictionary:(id)arg1 error:(id *)arg2;
+ (id)arrayOfDictionariesFromModels:(id)arg1;
+ (id)arrayOfDictionariesFromModels:(id)arg1 propertyNamesToExport:(id)arg2;
+ (id)dictionaryOfDictionariesFromModels:(id)arg1;
+ (id)keyMapper;
+ (void)setGlobalKeyMapper:(id)arg1;
+ (BOOL)propertyIsOptional:(id)arg1;
+ (BOOL)propertyIsIgnored:(id)arg1;
+ (id)protocolForArrayProperty:(id)arg1;
+ (Class)classForCollectionProperty:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void)__setup__;
- (id)init;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithString:(id)arg1 error:(id *)arg2;
- (id)initWithString:(id)arg1 usingEncoding:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)__keyMapper;
- (BOOL)__doesDictionary:(id)arg1 matchModelWithKeyMapper:(id)arg2 error:(id *)arg3;
- (id)__mapString:(id)arg1 withKeyMapper:(id)arg2;
- (BOOL)__importDictionary:(id)arg1 withKeyMapper:(id)arg2 validation:(BOOL)arg3 error:(id *)arg4;
- (BOOL)__isJSONModelSubClass:(Class)arg1;
- (id)__requiredPropertyNames;
- (id)__properties__;
- (void)__inspectProperties;
- (id)__transform:(id)arg1 forProperty:(id)arg2 error:(id *)arg3;
- (id)__reverseTransform:(id)arg1 forProperty:(id)arg2;
- (BOOL)__customSetValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)__customGetValue:(id *)arg1 forProperty:(id)arg2;
- (void)__createDictionariesForKeyPath:(id)arg1 inDictionary:(id *)arg2;
- (id)toDictionary;
- (id)toJSONString;
- (id)toJSONData;
- (id)toDictionaryWithKeys:(id)arg1;
- (id)toJSONDataWithKeys:(id)arg1;
- (id)toJSONStringWithKeys:(id)arg1;
- (id)indexPropertyName;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)validate:(id *)arg1;
- (id)description;
- (void)mergeFromDictionary:(id)arg1 useKeyMapping:(BOOL)arg2;
- (BOOL)mergeFromDictionary:(id)arg1 useKeyMapping:(BOOL)arg2 error:(id *)arg3;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
@end

