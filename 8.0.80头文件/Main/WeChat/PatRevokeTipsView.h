@interface PatRevokeTipsView : UIView <SendPatExt>
{
    BOOL _isHidingSelf; // +0x8
    BOOL _isShowBelowHeadImage; // +0x9
    double _navigationBarBottom; // +0x10
    double _patSystemMessageAddHeight; // +0x18
    id <PatRevokeTipsViewDelegate> _delegate; // +0x20
    PatWrap * _patWrap; // +0x28
    NSString * _chatName; // +0x30
    MMTimer * _timer; // +0x38
    UIView * _contentView; // +0x40
    RichTextView * _richTextView; // +0x48
    MMUIButton * _revokeButton; // +0x50
    CAShapeLayer * _bubbleLayer; // +0x58
    CGRect _headImageFrame; // +0x60
}
- (id)initWithPatWrap:(id)arg1 chatName:(id)arg2;
- (void)dealloc;
- (void)initSubviews;
- (void)refreshViewWithHeadFrame:(CGRect)arg1;
- (void)refreshLayer;
- (void)updateAnchorPoint;
- (id)generateBubbleLayer;
- (id)generateBubblePathInRect:(CGRect)arg1 arrowX:(double)arg2;
- (void)addArrowToBezierPath:(id)arg1;
- (void)doShowAnimation;
- (void)animationHiddenSelf;
- (void)showWithHeadFrame:(CGRect)arg1;
- (void)onClickRevokeButton;
- (void)onRevokePat:(id)arg1 fromChat:(id)arg2 isSuccess:(BOOL)arg3;
- (double)navigationBarBottom;
- (void)setNavigationBarBottom:(double)arg1;
- (double)patSystemMessageAddHeight;
- (void)setPatSystemMessageAddHeight:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)patWrap;
- (void)setPatWrap:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (CGRect)headImageFrame;
- (void)setHeadImageFrame:(CGRect)arg1;
- (BOOL)isHidingSelf;
- (void)setIsHidingSelf:(BOOL)arg1;
- (BOOL)isShowBelowHeadImage;
- (void)setIsShowBelowHeadImage:(BOOL)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)revokeButton;
- (void)setRevokeButton:(id)arg1;
- (id)bubbleLayer;
- (void)setBubbleLayer:(id)arg1;
- (void).cxx_destruct;
@end
