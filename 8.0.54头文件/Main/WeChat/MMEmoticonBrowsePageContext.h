@interface MMEmoticonBrowsePageContext : MMEmoticonLiteAppPageContextBase
{
    CMessageWrap * _messageWrap; // +0x8
    CEmoticonWrap * _emoticonWrap; // +0x10
    NSString * _sdkRequestID; // +0x18
}
- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (void)setMessageWrap:(id)arg1;
- (void)setEmoticonWrap:(id)arg1;
- (id)sdkRequestID;
- (id)messageWrap;
- (id)emoticonWrap;
- (void)setSdkRequestID:(id)arg1;
- (void).cxx_destruct;
@end

