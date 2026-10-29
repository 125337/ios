@interface MMFinderLiveSubTitleView : UIView
{
    BOOL _hasContent; // +0x8
    BOOL _isLiveMinimized; // +0x9
    MMLiveTaskId * _taskId; // +0x10
    UIView * _gradientView; // +0x18
    CAGradientLayer * _gradientLayer; // +0x20
    UIView * _chnSubTitleAreaView; // +0x28
    UIView * _engSubTitleAreaView; // +0x30
    RichTextView * _chnSubTitleTextView; // +0x38
    RichTextView * _engSubTitleTextView; // +0x40
    MMFinderLiveSubTitleModel * _subTitleModel; // +0x48
    MMFinderLiveSubTitleViewModel * _subTitleViewModel; // +0x50
    double _standardChnSubTitleLineHeight; // +0x58
}
+ (id)getCurrentChnSubTitleFont;
+ (id)getCurrentEngSubTitleFont;
+ (id)getCurrentChnSubTitleTextAttributeObj;
+ (id)getCurrentEngSubTitleTextAttributeObj;
+ (unsigned long long)getCurrentChnMaxLineNum;
+ (unsigned long long)getCurrentEngMaxLineNum;
+ (unsigned long long)getChnDisplayMode;
+ (unsigned long long)getEngDisplayMode;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutGradientView;
- (void)layoutChnSubTitleView;
- (void)layoutEngSubTitleView;
- (void)updateSubTitleAreaViewsOrigin;
- (void)updateSubTitleTextViewOrigin:(id)arg1 refreshStyle:(unsigned long long)arg2;
- (void)updateChnSubTitleTextViewOriginWithRefreshStyle:(unsigned long long)arg1;
- (void)updateEngSubTitleTextViewOriginWithRefreshStyle:(unsigned long long)arg1;
- (void)scrollSubTitleToBottomAnimated:(long long)arg1;
- (id)subTitleViewModel;
- (void)onOrientationChanged;
- (double)preferHeightInDisplayScene:(unsigned long long)arg1;
- (void)updateSubTitleClosed:(BOOL)arg1;
- (void)updateSubTitleDisabled:(BOOL)arg1;
- (void)onMinimizeStarted;
- (void)onMaximizeStarted;
- (unsigned long long)refreshSubTitle:(id)arg1;
- (id)getSubTitleTextView:(long long)arg1;
- (double)preferEngSubTitleAreaHeight;
- (double)preferChnSubTitleAreaHeight;
- (double)preferBottomInsetInDisplayScene:(unsigned long long)arg1;
- (double)preferLeftRightInset;
- (void)createSubTitleModel;
- (id)getCurrentSubTitleUIConfigModel;
- (void)updateSubTitleUIConfigModel;
- (void)updateStandardChnSubTitleLineHeight;
- (void)updateDisplayAlpha;
- (void)setTaskId:(id)arg1;
- (void)setAlpha:(double)arg1;
- (BOOL)enableDisplaySubTitle;
- (void)setHasContent:(BOOL)arg1;
- (BOOL)hasStartSubTitleDisplay;
- (BOOL)isSubTitleClosed;
- (BOOL)isSubTitleDisabled;
- (id)taskId;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)chnSubTitleAreaView;
- (void)setChnSubTitleAreaView:(id)arg1;
- (id)engSubTitleAreaView;
- (void)setEngSubTitleAreaView:(id)arg1;
- (id)chnSubTitleTextView;
- (void)setChnSubTitleTextView:(id)arg1;
- (id)engSubTitleTextView;
- (void)setEngSubTitleTextView:(id)arg1;
- (id)subTitleModel;
- (void)setSubTitleModel:(id)arg1;
- (void)setSubTitleViewModel:(id)arg1;
- (BOOL)hasContent;
- (BOOL)isLiveMinimized;
- (void)setIsLiveMinimized:(BOOL)arg1;
- (double)standardChnSubTitleLineHeight;
- (void)setStandardChnSubTitleLineHeight:(double)arg1;
- (void).cxx_destruct;
@end

