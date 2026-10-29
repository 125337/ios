@interface BTBaseRecommendAppMsgCellViewModel : BTBaseRecommendMsgCellViewModel
{
    unsigned int _accountIndex; // +0x28
    unsigned int _appMsgIndex; // +0x2c
}
+ (id)createModelWithSectionData:(id)arg1 msgWrap:(id)arg2 itemIndex:(unsigned int)arg3 accountIndex:(unsigned int)arg4 appMsgIndex:(unsigned int)arg5 viewWidth:(double)arg6;
+ (BOOL)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
+ (id)classNameArr;
- (void)updateWithSectionData:(id)arg1 msgWrap:(id)arg2 itemIndex:(unsigned int)arg3 accountIndex:(unsigned int)arg4 appMsgIndex:(unsigned int)arg5 viewWidth:(double)arg6;
- (void)updateCellHeight:(double)arg1;
- (id)accountData;
- (id)appMsg;
- (id)contact;
- (id)coverUrl;
- (id)title;
- (BOOL)isShowLargeCover;
- (unsigned int)accountIndex;
- (unsigned int)appMsgIndex;
@end

