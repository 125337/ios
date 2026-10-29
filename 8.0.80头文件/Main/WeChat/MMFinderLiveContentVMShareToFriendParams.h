@interface MMFinderLiveContentVMShareToFriendParams : NSObject
{
    BOOL _usePageSheet; // +0x8
    BOOL _chatRoomOnly; // +0x9
    id <ForwardMessageLogicDelegate> _delegate; // +0x10
    WCFinderLiveShareExtraParams * _extra; // +0x18
    long long _shareScene; // +0x20
}
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)extra;
- (void)setExtra:(id)arg1;
- (BOOL)usePageSheet;
- (void)setUsePageSheet:(BOOL)arg1;
- (BOOL)chatRoomOnly;
- (void)setChatRoomOnly:(BOOL)arg1;
- (long long)shareScene;
- (void)setShareScene:(long long)arg1;
- (void).cxx_destruct;
@end
