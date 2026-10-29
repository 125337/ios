@interface CBTReferenceSourceItem : NSObject
{
    NSString * _desc; // +0x8
    NSString * _title; // +0x10
    NSString * _jumpUrl; // +0x18
    long long _sourceType; // +0x20
    NSString * _multimodalContent; // +0x28
}
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (long long)sourceType;
- (void)setSourceType:(long long)arg1;
- (id)multimodalContent;
- (void)setMultimodalContent:(id)arg1;
- (void).cxx_destruct;
@end
