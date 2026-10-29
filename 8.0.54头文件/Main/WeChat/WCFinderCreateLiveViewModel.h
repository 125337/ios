@interface WCFinderCreateLiveViewModel : NSObject
{
    BOOL _isCreateLivePrepareSuccessChecked; // +0x8
    BOOL _isCreateLivePrepareChecked; // +0x9
    BOOL _enableDescExtend; // +0xa
    WCFinderCreateLivePrepareResponseModel * _prepareResponseModel; // +0x10
    WCFinderCreateLivePrepareResponseFailModel * _prepareResponseFailModel; // +0x18
    NSArray * _liveNoticeList; // +0x20
    NSString * _descriptionPromptWording; // +0x28
    id /* block */ _createNoticePrePareBlock; // +0x30
    unsigned long long _role; // +0x38
    FinderLiveNoticeInfo * _modNoticeInfo; // +0x40
    NSMutableArray * _waittingBlocks; // +0x48
    NSDate * _bookingTime; // +0x50
    NSMutableArray * _dayArrs; // +0x58
    NSMutableArray * _specificDayArrs; // +0x60
    NSDate * _specificDate; // +0x68
    id /* block */ _createLivePrePareBlock; // +0x70
}
+ (id)getNoticeIdsDesc:(id)arg1;
- (id)init;
- (id)initWithCreateLiveWithRole:(unsigned long long)arg1 prePareBlock:(id /* block */)arg2;
- (id)initWithCreateLivePrePareBlock:(id /* block */)arg1;
- (id)initWithCreateLiveWithModNotice:(id)arg1 prePareBlock:(id /* block */)arg2;
- (void)checkLiveNoticeInfo;
- (void)udpateDefaultDescriptionPromptWording;
- (void)invokeWaittingNoticeInfoBlocks;
- (void)fetchCreateLiveNoticeInfo:(id /* block */)arg1 complete:(id /* block */)arg2;
- (void)createStandardLiveNoticeWithStartTime:(id)arg1 topic:(id)arg2 introduction:(id)arg3 paymentSetting:(id)arg4 couponsStockIDs:(id)arg5 aggregateType:(int)arg6 triggerType:(int)arg7 reportingSourceScene:(unsigned long long)arg8 completionHandler:(id /* block */)arg9;
- (void)createQuickLiveNoticeWithExpirationTime:(id)arg1 topic:(id)arg2 introduction:(id)arg3 reportingSourceScene:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)modNoticeWithWithNewNoticeInfo:(id)arg1 modifyFieldFlag:(unsigned long long)arg2 modifyReason:(id)arg3 reportingSourceScene:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
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
- (id /* block */)createLivePrePareBlock;
- (void)setCreateLivePrePareBlock:(id /* block */)arg1;
- (BOOL)enableDescExtend;
- (void)setEnableDescExtend:(BOOL)arg1;
- (void).cxx_destruct;
@end

