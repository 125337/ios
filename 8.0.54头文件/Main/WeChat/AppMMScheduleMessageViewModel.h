@interface AppMMScheduleMessageViewModel : CommonMessageViewModel
{
    AppMMScheduleItem * _scheduleItem; // +0x70
    double _contentWidth; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)scheduleItem;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)contentWidth;
- (void)setScheduleItem:(id)arg1;
- (void)setContentWidth:(double)arg1;
- (void).cxx_destruct;
@end

