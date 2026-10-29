@interface EmoticonCustomCreateTask : NSObject
{
    unsigned long long _source; // +0x8
    unsigned long long _editorType; // +0x10
    NSString * _feedId; // +0x18
    NSString * _nonceId; // +0x20
    EmoticonCustomCreatePreProcessConfig * _preprocessConfig; // +0x28
}
+ (id)defaultTask;
+ (id)finderTaskWithFeedId:(id)arg1 nonceId:(id)arg2;
- (id)init;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (unsigned long long)editorType;
- (void)setEditorType:(unsigned long long)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)preprocessConfig;
- (void)setPreprocessConfig:(id)arg1;
- (void).cxx_destruct;
@end

