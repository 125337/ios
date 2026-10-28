@interface BraceletTopicRecordView : UIView <MMWebImageViewDelegate>
{
    double m_offsetY; // +0x8
    BOOL _isAppleWatch; // +0x10
    BOOL _isHardware; // +0x11
    id <BraceletTopicRecordDelegate> _delegate; // +0x18
    NSArray * _records; // +0x20
    NSArray * _goals; // +0x28
    WAContactGetter * _getter; // +0x30
    WAContact * _contact; // +0x38
    DeviceBrandJumpInfo * _jumpInfo; // +0x40
    MMWebImageView * _brandIconView; // +0x48
}
+ (double)calculateHeightWithSportRecords:(id)arg1 sportGoals:(id)arg2;
- (id)initWithSportRecords:(id)arg1 sportGoals:(id)arg2 width:(double)arg3;
- (void)initView;
- (void)initTitleViewWithContact:(id)arg1;
- (void)addAppleRing;
- (void)addSportRecord:(id)arg1;
- (void)onClickAppButton:(id)arg1;
- (void)openFinderProfile;
- (void)openWeAppForSports;
- (void)onLoadImageOK:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
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
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)brandIconView;
- (void)setBrandIconView:(id)arg1;
- (void).cxx_destruct;
@end
