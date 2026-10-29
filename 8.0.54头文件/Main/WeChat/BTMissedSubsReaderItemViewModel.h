@interface BTMissedSubsReaderItemViewModel : BTBaseRecommendAppMsgCellViewModel
{
    NSMutableArray * _titleArrStyles; // +0x28
}
+ (BOOL)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
- (id)itemViewClassName;
- (id)title;
- (id)titleArrStyles;
- (double)titleLimitWidth;
- (unsigned long long)titleLimitLineNum;
- (id)contentUrl;
- (id)coverUrl;
- (BOOL)isShowLargeCover;
- (void)setTitleArrStyles:(id)arg1;
- (void).cxx_destruct;
@end

