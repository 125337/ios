@interface QTCJSONKeyMapper : NSObject
{
    id /* block */ _modelToJSONKeyBlock; // +0x8
}
+ (id)swapKeysAndValuesInDictionary:(id)arg1;
+ (id)mapperFromUnderscoreCaseToCamelCase;
+ (id)mapperForSnakeCase;
+ (id)mapperForTitleCase;
+ (id)mapperFromUpperCaseToLowerCase;
+ (id)mapper:(id)arg1 withExceptions:(id)arg2;
+ (id)baseMapper:(id)arg1 withModelToJSONExceptions:(id)arg2;
- (id)initWithJSONToModelBlock:(id /* block */)arg1 modelToJSONBlock:(id /* block */)arg2;
- (id)initWithModelToJSONBlock:(id /* block */)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithModelToJSONDictionary:(id)arg1;
- (id /* block */)JSONToModelKeyBlock;
- (id)convertValue:(id)arg1 isImportingToModel:(BOOL)arg2;
- (id)convertValue:(id)arg1;
- (id /* block */)modelToJSONKeyBlock;
- (void).cxx_destruct;
@end

