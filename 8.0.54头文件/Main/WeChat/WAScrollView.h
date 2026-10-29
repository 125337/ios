@interface WAScrollView : UIScrollView
{
    unsigned int _viewId; // +0x8
    NSString * _userData; // +0x10
    NSDictionary * _style; // +0x18
    UIColor * _backgroundColor; // +0x20
    WAAllTouchRecognizer * _allTouchGesgure; // +0x28
}
- (id)init;
- (void)setTouchDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)setViewStyle:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (unsigned int)viewId;
- (void)setViewId:(unsigned int)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)allTouchGesgure;
- (void)setAllTouchGesgure:(id)arg1;
- (void).cxx_destruct;
@end

