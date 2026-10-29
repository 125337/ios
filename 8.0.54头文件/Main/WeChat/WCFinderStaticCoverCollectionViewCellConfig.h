@interface WCFinderStaticCoverCollectionViewCellConfig : NSObject
{
    BOOL _customCoverNoAutoPlay; // +0x8
    BOOL _autoPlayEndToNext; // +0x9
    BOOL _globalContinuePlay; // +0xa
    BOOL _forbidenInnerRecommandReason; // +0xb
    unsigned long long _componentFlag; // +0x10
    unsigned long long _topLeftViewType; // +0x18
    unsigned long long _bottomRightViewType; // +0x20
    unsigned long long _bottomRightViewFlag; // +0x28
    unsigned long long _bottomLeftViewFlag; // +0x30
    unsigned long long _coverMaskType; // +0x38
    double _descriptionFontWeight; // +0x40
    UIFont * _descriptionFont; // +0x48
    NSString * _bottomRightViewCustomWording; // +0x50
    NSString * _bottomRightCustomIconName; // +0x58
    NSString * _maskTipsTitle; // +0x60
    UIFont * _maskTipsFont; // +0x68
    UIImage * _maskTipsIcon; // +0x70
    UIColor * _coverBackGroundColor; // +0x78
    unsigned long long _descriptionMaxLine; // +0x80
    NSString * _customLikeImageName; // +0x88
    WCFinderFeedContentTempModel * _feedTempModel; // +0x90
    NSArray * _customInfoItems; // +0x98
    unsigned long long _UIModeStyle; // +0xa0
    double _descHorizontalPadding; // +0xa8
    UIColor * _customPostTimeColor; // +0xb0
    NSString * _customPostTimeContent; // +0xb8
    id <WCFinderStaticCoverCellMenuHandle> _longPressMenuHandle; // +0xc0
    UIEdgeInsets _bottomViewInsets; // +0xc8
}
+ (id)defaultConfig;
+ (id)lifeHomeConfig;
+ (id)musicTopicConfig;
+ (id)membershipConfigIsAuthor:(BOOL)arg1 membershipFlag:(BOOL)arg2;
+ (id)membershipConfigIsAuthor:(BOOL)arg1 membershipFlag:(BOOL)arg2 customPostTimeColor:(id)arg3 customPostTimeContent:(id)arg4;
+ (id)InterestRelatedFeedFlowConfig;
- (id)init;
- (unsigned long long)componentFlag;
- (void)setComponentFlag:(unsigned long long)arg1;
- (unsigned long long)topLeftViewType;
- (void)setTopLeftViewType:(unsigned long long)arg1;
- (unsigned long long)bottomRightViewType;
- (void)setBottomRightViewType:(unsigned long long)arg1;
- (unsigned long long)bottomRightViewFlag;
- (void)setBottomRightViewFlag:(unsigned long long)arg1;
- (unsigned long long)bottomLeftViewFlag;
- (void)setBottomLeftViewFlag:(unsigned long long)arg1;
- (UIEdgeInsets)bottomViewInsets;
- (void)setBottomViewInsets:(UIEdgeInsets)arg1;
- (unsigned long long)coverMaskType;
- (void)setCoverMaskType:(unsigned long long)arg1;
- (double)descriptionFontWeight;
- (void)setDescriptionFontWeight:(double)arg1;
- (id)descriptionFont;
- (void)setDescriptionFont:(id)arg1;
- (id)bottomRightViewCustomWording;
- (void)setBottomRightViewCustomWording:(id)arg1;
- (id)bottomRightCustomIconName;
- (void)setBottomRightCustomIconName:(id)arg1;
- (id)maskTipsTitle;
- (void)setMaskTipsTitle:(id)arg1;
- (id)maskTipsFont;
- (void)setMaskTipsFont:(id)arg1;
- (id)maskTipsIcon;
- (void)setMaskTipsIcon:(id)arg1;
- (id)coverBackGroundColor;
- (void)setCoverBackGroundColor:(id)arg1;
- (unsigned long long)descriptionMaxLine;
- (void)setDescriptionMaxLine:(unsigned long long)arg1;
- (id)customLikeImageName;
- (void)setCustomLikeImageName:(id)arg1;
- (id)feedTempModel;
- (void)setFeedTempModel:(id)arg1;
- (id)customInfoItems;
- (void)setCustomInfoItems:(id)arg1;
- (BOOL)customCoverNoAutoPlay;
- (void)setCustomCoverNoAutoPlay:(BOOL)arg1;
- (BOOL)autoPlayEndToNext;
- (void)setAutoPlayEndToNext:(BOOL)arg1;
- (BOOL)globalContinuePlay;
- (void)setGlobalContinuePlay:(BOOL)arg1;
- (BOOL)forbidenInnerRecommandReason;
- (void)setForbidenInnerRecommandReason:(BOOL)arg1;
- (unsigned long long)UIModeStyle;
- (void)setUIModeStyle:(unsigned long long)arg1;
- (double)descHorizontalPadding;
- (void)setDescHorizontalPadding:(double)arg1;
- (id)customPostTimeColor;
- (void)setCustomPostTimeColor:(id)arg1;
- (id)customPostTimeContent;
- (void)setCustomPostTimeContent:(id)arg1;
- (id)longPressMenuHandle;
- (void)setLongPressMenuHandle:(id)arg1;
- (void).cxx_destruct;
@end

