@interface MMFinderLiveSubTitleDisplayModel : NSObject
{
    BOOL _needUpdate; // +0x8
    BOOL _needForceRefreshUI; // +0x9
    long long _subTitleType; // +0x10
    UIFont * _font; // +0x18
    unsigned long long _maxLineNum; // +0x20
    unsigned long long _maxDisplayLineNum; // +0x28
    double _maxContentWidth; // +0x30
    TextStyleAttributeObj * _textStyleAttribute; // +0x38
    unsigned long long _staticSplicingStyle; // +0x40
    unsigned long long _displayMode; // +0x48
    NSString * _content; // +0x50
    NSArray * _contentArrStyles; // +0x58
    unsigned long long _currentUpdateResult; // +0x60
    unsigned long long _previousUpdateType; // +0x68
    unsigned long long _currentUpdateType; // +0x70
    long long _lastSubTitleLineIndex; // +0x78
    double _currentMaxContentHeight; // +0x80
    long long _currentMaxLines; // +0x88
    unsigned long long _currentSplicingStyle; // +0x90
    NSMutableArray * _currSubTitleList; // +0x98
    CGSize _contentSize; // +0xa0
}
+ (id)getContentWithArrStyles:(id)arg1;
+ (id)createDisplayContent:(id)arg1 splicingStyle:(unsigned long long)arg2;
+ (BOOL)isSubTitleStartLineIndexValid:(long long)arg1;
+ (BOOL)isSubTitleStartOffsetXValid:(double)arg1;
+ (id)getSplicingSpaceDivision;
- (BOOL)updateSubTitleDatas:(id)arg1;
- (BOOL)forceRefreshUI;
- (BOOL)forceRefreshUIIfNeeded;
- (id)getContentArrStylesAtLine:(unsigned long long)arg1;
- (id)getContentArrStylesInLineRange:(_NSRange)arg1;
- (id)getDisplayContentArrStyles;
- (void)tagNeedForceRefreshUI;
- (void)updateSubTitleList:(id)arg1;
- (void)refreshUI;
- (BOOL)checkSubTitleListCountUpdated:(id)arg1;
- (BOOL)checkSubTitleListIndexUpdated:(id)arg1;
- (BOOL)checkSubTitleListContentUpdated:(id)arg1;
- (id)getDisplayContent:(id)arg1;
- (void)preUpdateCurrentSplicingStyle:(id)arg1 checkLastSubTitleEndLineIndex:(long long *)arg2 checkNewSubTitleStartLineIndex:(long long *)arg3 checkNewSubTitleStartOffsetX:(double *)arg4;
- (struct)getNewSubTitleLayoutPositionWithStartLineIndex:(long long)arg1 startOffsetX:(double)arg2 splicingMarkLineIndex:(long long)arg3 splicingMarkOffsetX:(double)arg4 splicingStyle:(unsigned long long)arg5;
- (void)checkFirstCharAfterSubTitleMarkPosition:(id)arg1 lineIndex:(long long *)arg2 offsetX:(double *)arg3;
- (void)checkSplicingMarkPosition:(id)arg1 lineIndex:(long long *)arg2 offsetX:(double *)arg3;
- (void)updateCurrSubTitleStartOffsetX:(double)arg1;
- (void)updateCurrSubTitleStartLineIndex:(long long)arg1;
- (void)clearAllSubTitleLayoutDatas;
- (id)currSubTitleList;
- (void)setCurrentUpdateType:(unsigned long long)arg1;
- (id)currentSubTitle;
- (long long)subTitleType;
- (void)setSubTitleType:(long long)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (unsigned long long)maxLineNum;
- (void)setMaxLineNum:(unsigned long long)arg1;
- (unsigned long long)maxDisplayLineNum;
- (void)setMaxDisplayLineNum:(unsigned long long)arg1;
- (double)maxContentWidth;
- (void)setMaxContentWidth:(double)arg1;
- (id)textStyleAttribute;
- (void)setTextStyleAttribute:(id)arg1;
- (unsigned long long)staticSplicingStyle;
- (void)setStaticSplicingStyle:(unsigned long long)arg1;
- (unsigned long long)displayMode;
- (void)setDisplayMode:(unsigned long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (CGSize)contentSize;
- (void)setContentSize:(CGSize)arg1;
- (id)contentArrStyles;
- (void)setContentArrStyles:(id)arg1;
- (unsigned long long)currentUpdateResult;
- (void)setCurrentUpdateResult:(unsigned long long)arg1;
- (unsigned long long)previousUpdateType;
- (void)setPreviousUpdateType:(unsigned long long)arg1;
- (unsigned long long)currentUpdateType;
- (long long)lastSubTitleLineIndex;
- (void)setLastSubTitleLineIndex:(long long)arg1;
- (BOOL)needUpdate;
- (void)setNeedUpdate:(BOOL)arg1;
- (double)currentMaxContentHeight;
- (void)setCurrentMaxContentHeight:(double)arg1;
- (long long)currentMaxLines;
- (void)setCurrentMaxLines:(long long)arg1;
- (unsigned long long)currentSplicingStyle;
- (void)setCurrentSplicingStyle:(unsigned long long)arg1;
- (void)setCurrSubTitleList:(id)arg1;
- (BOOL)needForceRefreshUI;
- (void)setNeedForceRefreshUI:(BOOL)arg1;
- (void).cxx_destruct;
@end
