@interface WABaseView : WATouchBaseView <MoveWithTouchAlgorithmDelegate>
{
    UILabel * _label; // +0x8
    UIView * _background; // +0x10
    double[4] _padding; // +0x18
    double _alignOffset; // +0x38
    double _rotate; // +0x40
    double _scaleX; // +0x48
    double _scaleY; // +0x50
    BOOL _clickable; // +0x58
    NSDictionary * _fontWeightDic; // +0x60
    BOOL _bEventToWebView; // +0x68
    BOOL _fixed; // +0x69
    BOOL _parentDraggable; // +0x6a
    unsigned int _viewId; // +0x6c
    unsigned long long _imageLoadGeneration; // +0x70
    NSString * _userData; // +0x78
    id <WABaseViewDelegate> _delegate; // +0x80
    unsigned long long _type; // +0x88
    unsigned long long _referrerPolicyType; // +0x90
    MoveWithTouchAlgorithm * _moveAlgorithm; // +0x98
    NSNumber * _workerIdNumber; // +0xa0
    NSDictionary * _style; // +0xa8
    UIColor * _customBackgroundColor; // +0xb0
    WABaseView * _followBaseView; // +0xb8
    NSMutableDictionary * _followerBaseViewDic; // +0xc0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)description;
- (void)setLabel:(id)arg1;
- (void)layoutSubviews;
- (void)updateBackgoundImage:(id)arg1 iconPath:(id)arg2;
- (void)setClickable:(BOOL)arg1;
- (id)getBackgroundImage:(id)arg1;
- (void)setBackground:(id)arg1 iconPath:(id)arg2 style:(id)arg3 clickable:(BOOL)arg4;
- (void)setBorderStyle:(id)arg1;
- (void)onButtonClick:(id)arg1;
- (void)doClickAction;
- (BOOL)clickable;
- (void)followOtherBaseView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setMoveAlgorithm:(id)arg1;
- (BOOL)shouldLockToPortrait;
- (BOOL)isInDraggableContext;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped:(CGPoint)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (double)getFontWeightForKey:(id)arg1;
- (unsigned long long)imageLoadGeneration;
- (void)setImageLoadGeneration:(unsigned long long)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (BOOL)bEventToWebView;
- (void)setBEventToWebView:(BOOL)arg1;
- (unsigned int)viewId;
- (void)setViewId:(unsigned int)arg1;
- (BOOL)fixed;
- (void)setFixed:(BOOL)arg1;
- (unsigned long long)referrerPolicyType;
- (void)setReferrerPolicyType:(unsigned long long)arg1;
- (id)moveAlgorithm;
- (BOOL)parentDraggable;
- (void)setParentDraggable:(BOOL)arg1;
- (id)workerIdNumber;
- (void)setWorkerIdNumber:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)customBackgroundColor;
- (void)setCustomBackgroundColor:(id)arg1;
- (id)followBaseView;
- (void)setFollowBaseView:(id)arg1;
- (id)followerBaseViewDic;
- (void)setFollowerBaseViewDic:(id)arg1;
- (void).cxx_destruct;
@end
