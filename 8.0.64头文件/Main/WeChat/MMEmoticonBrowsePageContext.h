@interface MMEmoticonBrowsePageContext : MMEmoticonLiteAppPageContextBase
{
    id <MMLiteAppHalfScreenStatusChangeListener> _halfScreenStatusChangeListener; // +0x8
    id /* block */ _liteAppConfigBlock; // +0x10
    CMessageWrap * _messageWrap; // +0x18
    CEmoticonWrap * _emoticonWrap; // +0x20
    NSString * _sdkRequestID; // +0x28
}
- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (void)setMessageWrap:(id)arg1;
- (void)setEmoticonWrap:(id)arg1;
- (id)sdkRequestID;
- (unsigned long long)halfScreenHeight:(id)arg1;
- (id)halfScreenStatusChangeListener;
- (void)setHalfScreenStatusChangeListener:(id)arg1;
- (id /* block */)liteAppConfigBlock;
- (void)setLiteAppConfigBlock:(id /* block */)arg1;
- (id)messageWrap;
- (id)emoticonWrap;
- (void)setSdkRequestID:(id)arg1;
- (void).cxx_destruct;
@end
