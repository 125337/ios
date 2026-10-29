@interface NSObject (TPYYModel)
+ (id)_tp_dictionaryWithJSON:(id)arg1;
+ (id)tp_modelWithJSON:(id)arg1;
+ (id)tp_modelWithDictionary:(id)arg1;
- (BOOL)tp_modelSetWithJSON:(id)arg1;
- (BOOL)tp_modelSetWithDictionary:(id)arg1;
- (id)tp_modelToJSONObject;
- (id)tp_modelToJSONData;
- (id)tp_modelToJSONString;
- (id)tp_modelCopy;
- (void)tp_modelEncodeWithCoder:(id)arg1;
- (id)tp_modelInitWithCoder:(id)arg1;
- (unsigned long long)tp_modelHash;
- (BOOL)tp_modelIsEqual:(id)arg1;
- (id)tp_modelDescription;
@end
