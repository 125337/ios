@interface BraceletTopicRecordView : UIView <MMWebImageViewDelegate>
{
    double m_offsetY; // +0x8
    BOOL _sportTitleExpanded; // +0x10
    BOOL _isAppleWatch; // +0x11
    BOOL _isHardware; // +0x12
    BOOL _hasTruncatedSportTitle; // +0x13
    id <BraceletTopicRecordDelegate> _delegate; // +0x18
    NSString * _topicKey; // +0x20
    NSArray * _records; // +0x28
    NSArray * _goals; // +0x30
    WAContactGetter * _getter; // +0x38
    WAContact * _contact; // +0x40
    double _alignedTitleWidth; // +0x48
    DeviceBrandJumpInfo * _jumpInfo; // +0x50
    MMWebImageView * _brandIconView; // +0x58
}
+ (double)calculateHeightWithSportRecords:(id)arg1 sportGoals:(id)arg2;
- (id)initWithSportRecords:(id)arg1 sportGoals:(id)arg2 width:(double)arg3;
- (id)initWithSportRecords:(id)arg1 sportGoals:(id)arg2 width:(double)arg3 alignedTitleWidth:(double)arg4;
- (void)initView;
- (void)p_applyAlignedTitleWidthToLabel:(id)arg1;
- (BOOL)p_isTextTruncated:(id)arg1 font:(id)arg2 width:(double)arg3;
- (unsigned long long)p_lineCountForText:(id)arg1 font:(id)arg2 width:(double)arg3;
- (void)p_addSportTitleExpandButtonIfNeeded;
- (void)p_adjustSuperviewAfterHeightChangedFrom:(double)arg1;
- (void)p_updateSportTitleExpanded:(BOOL)arg1 notifyDelegate:(BOOL)arg2;
- (void)updateSportTitleExpanded:(BOOL)arg1;
- (void)onClickSportTitleExpandButton;
- (void)initTitleViewWithContact:(id)arg1;
- (void)addAppleRing;
- (void)addNewStyleAppleRing;
- (void)addSportRecord:(id)arg1;
- (void)addNewStyleSportRecord:(id)arg1;
- (void)onClickAppButton:(id)arg1;
- (void)openFinderProfile;
- (void)openWeAppForSports;
- (void)onLoadImageOK:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)sportTitleExpanded;
- (void)setSportTitleExpanded:(BOOL)arg1;
- (id)topicKey;
- (void)setTopicKey:(id)arg1;
- (id)records;
- (void)setRecords:(id)arg1;
- (id)goals;
- (void)setGoals:(id)arg1;
- (id)getter;
- (void)setGetter:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isAppleWatch;
- (void)setIsAppleWatch:(BOOL)arg1;
- (BOOL)isHardware;
- (void)setIsHardware:(BOOL)arg1;
- (double)alignedTitleWidth;
- (void)setAlignedTitleWidth:(double)arg1;
- (BOOL)hasTruncatedSportTitle;
- (void)setHasTruncatedSportTitle:(BOOL)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)brandIconView;
- (void)setBrandIconView:(id)arg1;
- (void).cxx_destruct;
@end
