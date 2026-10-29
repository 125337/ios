@interface WCFinderContentTableViewCell : WCFinderTableViewCell <WCFinderFeedContentTextClickActionDelegate, WCFinderMelodyViewDelegate, WCFinderTopicDataKeyExt>
{
    int _scene; // +0x8
    id <WCFinderContentTableViewCellDelegate> _delegate; // +0x10
    WCFinderFeedContentTouchExpandTextView * _textView; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    InteractionLabel * _linkLabel; // +0x28
    InteractionLabel * _POILabel; // +0x30
    InteractionLabel * _eventLabel; // +0x38
    UIButton * _longEntry; // +0x40
    UIButton * _longEntryBubble; // +0x48
    UIImageView * _locationImageView; // +0x50
    UIImageView * _eventImageView; // +0x58
    UIImageView * _linkImageView; // +0x60
    id /* block */ _delayRefreshWork; // +0x68
}
+ (double)cellHeightWith:(id)arg1 width:(double)arg2;
+ (double)constTextHeightWith:(id)arg1 width:(double)arg2;
+ (CGSize)cellIconSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)prepareForReuse;
- (id)linkLabel;
- (id)POILabel;
- (id)eventLabel;
- (id)linkImageView;
- (id)eventImageView;
- (id)longEntry;
- (id)longEntryBubble;
- (id)locationImageView;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)updateContentWith:(id)arg1 scene:(int)arg2;
- (void)cellStartExposeReportAction;
- (void)onEntry;
- (void)enterTriggerArea;
- (void)leaveTriggerArea;
- (BOOL)canBecomeFirstResponder;
- (void)showTextMenuWithRect:(CGRect)arg1;
- (void)clickLinkAction;
- (void)clickPOIAction:(id)arg1;
- (void)clickEventAction:(id)arg1;
- (void)showLongEntryBubbleIfPossible;
- (void)hideLongEntryBubbleIfPossible;
- (void)resetLongEntry;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2 isTouchExpand:(BOOL)arg3;
- (void)onFeedContentTextView:(id)arg1 longPressedText:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickTopicText:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copyText;
- (void)onFeedContentTextView:(id)arg1 clickContentUserName:(id)arg2;
- (void)finderFeedEventIllegalWithEventId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void)setLinkLabel:(id)arg1;
- (void)setPOILabel:(id)arg1;
- (void)setEventLabel:(id)arg1;
- (void)setLongEntry:(id)arg1;
- (void)setLongEntryBubble:(id)arg1;
- (void)setLocationImageView:(id)arg1;
- (void)setEventImageView:(id)arg1;
- (void)setLinkImageView:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id /* block */)delayRefreshWork;
- (void)setDelayRefreshWork:(id /* block */)arg1;
- (void).cxx_destruct;
@end
