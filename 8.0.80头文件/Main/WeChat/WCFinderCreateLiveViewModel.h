@interface WCFinderCreateLiveViewModel : NSObject
{
    BOOL _isCreateLivePrepareSuccessChecked; // +0x8
    BOOL _isCreateLivePrepareChecked; // +0x9
    BOOL _enableDescExtend; // +0xa
    int _createLivePrepareReqScene; // +0xc
    WCFinderCreateLivePrepareResponseModel * _prepareResponseModel; // +0x10
    WCFinderCreateLivePrepareResponseFailModel * _prepareResponseFailModel; // +0x18
    NSArray * _liveNoticeList; // +0x20
    NSString * _descriptionPromptWording; // +0x28
    id /* block */ _createNoticePrePareBlock; // +0x30
    unsigned long long _role; // +0x38
    FinderLiveNoticeInfo * _modNoticeInfo; // +0x40
    MMFinderLiveCreateNoticeBindItemModel * _bindItemModel; // +0x48
    NSMutableArray * _waittingBlocks; // +0x50
    NSDate * _bookingTime; // +0x58
    NSMutableArray * _dayArrs; // +0x60
    NSMutableArray * _specificDayArrs; // +0x68
    NSDate * _specificDate; // +0x70
    NSMutableArray * _modNoticeDayArrs; // +0x78
    id /* block */ _createLivePrePareBlock; // +0x80
    long long _createLivePageMode; // +0x88
    NSString * _finderUsername; // +0x90
}
+ (unsigned long long)blueGiftBookingDayLimit;
+ (unsigned long long)noticeBookingDayLimit;
+ (unsigned long long)noticeMinuteInterval;
+ (id)getNoticeIdsDesc:(id)arg1;
- (id)init;
- (id)initWithReqScene:(int)arg1;
- (id)initWithCreateLiveWithRole:(unsigned long long)arg1 prePareBlock:(id /* block */)arg2 reqScene:(int)arg3 finderUsername:(id)arg4;
- (id)initWithCreateLivePrePareBlock:(id /* block */)arg1;
- (id)initWithCreateLivePrePareBlock:(id /* block */)arg1 reqScene:(int)arg2;
- (id)initWithCreateLivePrePareBlock:(id /* block */)arg1 reqScene:(int)arg2 finderUsername:(id)arg3;
- (id)initWithCreateLiveWithModNotice:(id)arg1 prePareBlock:(id /* block */)arg2;
- (id)initWithCreateLiveWithModNotice:(id)arg1 prePareBlock:(id /* block */)arg2 finderUsername:(id)arg3;
- (void)checkLiveNoticeInfo;
- (void)udpateDefaultDescriptionPromptWording;
- (void)invokeWaittingNoticeInfoBlocks;
- (void)fetchCreateLiveNoticeInfo:(id /* block */)arg1 complete:(id /* block */)arg2;
- (void)createStandardLiveNoticeWithStartTime:(id)arg1 topic:(id)arg2 introduction:(id)arg3 paymentSetting:(id)arg4 aggregateType:(int)arg5 triggerType:(int)arg6 reportingSourceScene:(unsigned long long)arg7 micTopicInfo:(id)arg8 completionHandler:(id /* block */)arg9;
- (void)createQuickLiveNoticeWithExpirationTime:(id)arg1 topic:(id)arg2 introduction:(id)arg3 reportingSourceScene:(unsigned long long)arg4 micTopicInfo:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)modNoticeWithWithNewNoticeInfo:(id)arg1 modifyFieldFlag:(unsigned long long)arg2 modifyReason:(id)arg3 reportingSourceScene:(unsigned long long)arg4 micTopicInfo:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)setBookingTimeWithSelectedDayComponent:(long long)arg1 hourComponent:(long long)arg2 minuteComponent:(long long)arg3;
- (id)getNoticeDefaultStartTime;
- (id)getNoticeStartTimeWithSelectedDayComponent:(long long)arg1 hourComponent:(long long)arg2 minuteComponent:(long long)arg3;
- (id)quickNoticeExpirationTimeForCurrentTime:(id)arg1;
- (id)getHourArrWithDayComponent:(long long)arg1;
- (id)getDatePickerData;
- (void)genDayComponentIfNeed;
- (id)dayComponent;
- (id)getHourDataWithDayComponent:(long long)arg1;
- (id)getMinuteDataWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getMinuteArrWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (long long)getNearestIndexWithTarggetItem:(id)arg1 itemList:(id)arg2;
- (void)genSpecificComponent:(double)arg1;
- (id)getSpecificDatePickerData:(double)arg1;
- (id)getSpecificHourDataWithDayComponent:(long long)arg1;
- (id)getSpecificMinuteDataWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getSpecificMinuteArrWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getSpecificHourArrWithDayComponent:(long long)arg1;
- (id)getSpecificNoticeStartTimeWithSelectedDayComponent:(long long)arg1 hourComponent:(long long)arg2 minuteComponent:(long long)arg3;
- (id)getModNoticeDatePickerData;
- (void)genModNoticeDayComponent;
- (id)getModNoticeHourDataWithDayComponent:(long long)arg1;
- (id)getModNoticeMinuteDataWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getMidnightOfDate:(id)arg1 calendar:(id)arg2;
- (id)getModNoticeKeyTimestampsForDayComponent:(long long)arg1;
- (id)getModNoticeHourArrWithDayComponent:(long long)arg1;
- (id)getModNoticeMinuteArrWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getModNoticeStartTimeWithSelectedDayComponent:(long long)arg1 hourComponent:(long long)arg2 minuteComponent:(long long)arg3;
- (void)getModNoticeInitialSelectedIndexWithStartTime:(id)arg1 dayComponent:(long long *)arg2 hourComponent:(long long *)arg3 minuteComponent:(long long *)arg4;
- (void)getNoticeInitialSelectedIndexWithStartTime:(id)arg1 dayComponent:(long long *)arg2 hourComponent:(long long *)arg3 minuteComponent:(long long *)arg4;
- (id)prepareResponseModel;
- (void)setPrepareResponseModel:(id)arg1;
- (id)prepareResponseFailModel;
- (void)setPrepareResponseFailModel:(id)arg1;
- (id)liveNoticeList;
- (void)setLiveNoticeList:(id)arg1;
- (id)descriptionPromptWording;
- (void)setDescriptionPromptWording:(id)arg1;
- (id /* block */)createNoticePrePareBlock;
- (void)setCreateNoticePrePareBlock:(id /* block */)arg1;
- (BOOL)isCreateLivePrepareSuccessChecked;
- (void)setIsCreateLivePrepareSuccessChecked:(BOOL)arg1;
- (unsigned long long)role;
- (void)setRole:(unsigned long long)arg1;
- (id)modNoticeInfo;
- (void)setModNoticeInfo:(id)arg1;
- (id)bindItemModel;
- (void)setBindItemModel:(id)arg1;
- (BOOL)isCreateLivePrepareChecked;
- (void)setIsCreateLivePrepareChecked:(BOOL)arg1;
- (id)waittingBlocks;
- (void)setWaittingBlocks:(id)arg1;
- (id)bookingTime;
- (void)setBookingTime:(id)arg1;
- (id)dayArrs;
- (void)setDayArrs:(id)arg1;
- (id)specificDayArrs;
- (void)setSpecificDayArrs:(id)arg1;
- (id)specificDate;
- (void)setSpecificDate:(id)arg1;
- (id)modNoticeDayArrs;
- (void)setModNoticeDayArrs:(id)arg1;
- (id /* block */)createLivePrePareBlock;
- (void)setCreateLivePrePareBlock:(id /* block */)arg1;
- (BOOL)enableDescExtend;
- (void)setEnableDescExtend:(BOOL)arg1;
- (long long)createLivePageMode;
- (void)setCreateLivePageMode:(long long)arg1;
- (int)createLivePrepareReqScene;
- (void)setCreateLivePrepareReqScene:(int)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end
