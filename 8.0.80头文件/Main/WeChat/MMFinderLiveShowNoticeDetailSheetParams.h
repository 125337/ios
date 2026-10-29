@interface MMFinderLiveShowNoticeDetailSheetParams : NSObject
{
    BOOL _showHideButton; // +0x8
    BOOL _showColumnView; // +0x9
    int _reportCommentScene; // +0xc
    unsigned int _reserveLiveScene; // +0x10
    FinderLiveNoticeInfo * _noticeInfo; // +0x18
    WCFinderContact * _anchorContact; // +0x20
    WCFinderContact * _referrerContact; // +0x28
    MMUIViewController * _showToastViewController; // +0x30
    UIView * _showInView; // +0x38
    unsigned long long _refObjectID; // +0x40
    id /* block */ _didReserveBlock; // +0x48
    id /* block */ _didHideNoticeBlock; // +0x50
}
- (id)init;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (id)referrerContact;
- (void)setReferrerContact:(id)arg1;
- (id)showToastViewController;
- (void)setShowToastViewController:(id)arg1;
- (id)showInView;
- (void)setShowInView:(id)arg1;
- (BOOL)showHideButton;
- (void)setShowHideButton:(BOOL)arg1;
- (BOOL)showColumnView;
- (void)setShowColumnView:(BOOL)arg1;
- (int)reportCommentScene;
- (void)setReportCommentScene:(int)arg1;
- (unsigned int)reserveLiveScene;
- (void)setReserveLiveScene:(unsigned int)arg1;
- (unsigned long long)refObjectID;
- (void)setRefObjectID:(unsigned long long)arg1;
- (id /* block */)didReserveBlock;
- (void)setDidReserveBlock:(id /* block */)arg1;
- (id /* block */)didHideNoticeBlock;
- (void)setDidHideNoticeBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
