@interface TrackRoomTopBarViewV1 : MMUIView <UIScrollViewDelegate, TrackRoomHeadListItemV1Delegate>
{
    id <TrackRoomTopBarViewV1Delegate> _delegate; // +0x8
    MMUIButton * _closeButton; // +0x10
    MMUIButton * _minimizeButton; // +0x18
    UILabel * _tipsLabel; // +0x20
    UIView * _headListContainer; // +0x28
    UIScrollView * _headList; // +0x30
    NSMutableArray * _headListItems; // +0x38
    TrackRoomHeadListItemV1 * _selectedHeadListItem; // +0x40
    BOOL _getMicSuccess; // +0x48
    NSMutableDictionary * _tipsArray; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)onCloseButtonClick:(id)arg1;
- (void)onMinimizeButtonClick;
- (void)addHeadListItem:(id)arg1 UpdateTitle:(BOOL)arg2;
- (void)removeHeadListItem:(id)arg1;
- (void)relayoutAllHeadListItem;
- (void)removeAllHeadListItem;
- (id)getHeadListItemByUsername:(id)arg1;
- (void)clearEnterExitTips;
- (void)updateTitle;
- (void)updateTipsLabel:(id)arg1 TextColor:(id)arg2;
- (void)doUpdateStrategy;
- (void)setTipsAndUpdate:(id)arg1 forOrder:(int)arg2;
- (void)removeTipsForOrderAndUpdate:(int)arg1;
- (void)gettingMic;
- (void)getMicFail;
- (void)getMicTimeout;
- (void)giveUpMic;
- (void)imTalking;
- (void)someoneTalking:(id)arg1;
- (void)nobodyTalking;
- (void)someoneEnter:(id)arg1 ShowTips:(BOOL)arg2;
- (void)someoneLeave:(id)arg1 ShowTips:(BOOL)arg2;
- (void)reConnecting;
- (void)pause;
- (void)reStart;
- (void)openTalkOk;
- (void)selecteHeadListItem:(id)arg1;
- (void)updateHeadItemAlpha:(id)arg1;
- (void)onHeadListItemClick:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
