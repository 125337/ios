@interface BTImageItemCellViewModel : BTReaderItemCellViewModel
{
    NSArray * _picUrls; // +0x78
}
+ (BOOL)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (id)itemViewClassName;
- (double)viewHeight;
- (double)titleMaxWidth;
- (unsigned long long)digestLineNumber;
- (id)friendsReadStr;
- (id)digestStr;
- (unsigned long long)picNum;
- (id)picUrls;
- (void).cxx_destruct;
@end
