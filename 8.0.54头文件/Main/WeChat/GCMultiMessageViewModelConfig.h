@interface GCMultiMessageViewModelConfig : NSObject
{
    BOOL _isRealTimeHotChat; // +0x8
    NSMutableArray * _msgViewModelConfig; // +0x10
    long long _defaultChannelId; // +0x18
    id <GCMultiMessageViewModelDelegate> _multiMessageViewModelDelegate; // +0x20
    NSMutableDictionary * _cacheDict; // +0x28
}
- (id)msgViewModelConfig;
- (void)setMsgViewModelConfig:(id)arg1;
- (long long)defaultChannelId;
- (void)setDefaultChannelId:(long long)arg1;
- (BOOL)isRealTimeHotChat;
- (void)setIsRealTimeHotChat:(BOOL)arg1;
- (id)multiMessageViewModelDelegate;
- (void)setMultiMessageViewModelDelegate:(id)arg1;
- (id)cacheDict;
- (void)setCacheDict:(id)arg1;
- (void).cxx_destruct;
@end

