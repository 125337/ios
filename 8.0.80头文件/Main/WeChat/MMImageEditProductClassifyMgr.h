@interface MMImageEditProductClassifyMgr : MMXNetImageApplication
+ (id)labelNameForId:(long long)arg1;
+ (long long)fallbackLabelId;
- (id)getThreadName;
- (id)modelPath;
- (id)modelFiles;
- (BOOL)isModelReady;
- (long long)bestInGroup:(id)arg1 scores:(id)arg2 group:(id)arg3 rank:(id)arg4;
- (long long)classifyWithImage:(id)arg1 score:(float *)arg2;
@end
