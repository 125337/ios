@interface MMLiveMessageViewModel : CommonMessageViewModel <MMGroupLiveMgrExt>
{
    double _cacheTitleHeight; // +0x70
    unsigned int _currentLiveStatus; // +0x78
    BOOL _isLiveEnded; // +0x7c
    NSString * _liveTitle; // +0x80
    NSString * _liveStatus; // +0x88
    unsigned long long _liveId; // +0x90
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)summayText:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isShowSourceView;
- (id)sourceIcon;
- (id)sourceTitle;
- (id)sourceTag;
- (id)additionalAccessibilityDescription;
- (double)titleHeight;
- (void)onGetLiveInfoWithResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 andLiveInfo:(id)arg4;
- (void)onLiveClosedResult:(id)arg1 andLiveId:(unsigned long long)arg2;
- (void)updateCurrentLiveStatus:(int)arg1;
- (id)liveTitle;
- (id)liveStatus;
- (unsigned long long)liveId;
- (BOOL)isLiveEnded;
- (void).cxx_destruct;
@end

