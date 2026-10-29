@interface GameChatRoomConfig : NSObject
{
    BOOL _isImgDefaultImg; // +0x8
    BOOL _isRealTimeHotChat; // +0x9
    BOOL _autoJoinIfCan; // +0xa
    BOOL _backToGameLifeTab; // +0xb
    BOOL _popCurrentVc; // +0xc
    NSString * _roomCoverImgUrl; // +0x10
    UIImage * _roomBgImage; // +0x18
    UIImageView * _animateCoverImgView; // +0x20
    UIImageView * _fromImgView; // +0x28
    GCChatRoomImageZoomAnimation * _zoomAnimation; // +0x30
    NSString * _animationIdentifer; // +0x38
    NSString * _chatRoomName; // +0x40
    NSString * _chatRoomDisplayName; // +0x48
    long long _targetChannelId; // +0x50
    long long _targetSeq; // +0x58
    GCOpenReportParam * _reportParam; // +0x60
    CGSize _desireViewSize; // +0x68
}
- (id)init;
- (id)roomCoverImgUrl;
- (void)setRoomCoverImgUrl:(id)arg1;
- (id)roomBgImage;
- (void)setRoomBgImage:(id)arg1;
- (BOOL)isImgDefaultImg;
- (void)setIsImgDefaultImg:(BOOL)arg1;
- (id)animateCoverImgView;
- (void)setAnimateCoverImgView:(id)arg1;
- (id)fromImgView;
- (void)setFromImgView:(id)arg1;
- (id)zoomAnimation;
- (void)setZoomAnimation:(id)arg1;
- (id)animationIdentifer;
- (void)setAnimationIdentifer:(id)arg1;
- (id)chatRoomName;
- (void)setChatRoomName:(id)arg1;
- (id)chatRoomDisplayName;
- (void)setChatRoomDisplayName:(id)arg1;
- (long long)targetChannelId;
- (void)setTargetChannelId:(long long)arg1;
- (long long)targetSeq;
- (void)setTargetSeq:(long long)arg1;
- (BOOL)isRealTimeHotChat;
- (void)setIsRealTimeHotChat:(BOOL)arg1;
- (BOOL)autoJoinIfCan;
- (void)setAutoJoinIfCan:(BOOL)arg1;
- (id)reportParam;
- (void)setReportParam:(id)arg1;
- (BOOL)backToGameLifeTab;
- (void)setBackToGameLifeTab:(BOOL)arg1;
- (BOOL)popCurrentVc;
- (void)setPopCurrentVc:(BOOL)arg1;
- (CGSize)desireViewSize;
- (void)setDesireViewSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
