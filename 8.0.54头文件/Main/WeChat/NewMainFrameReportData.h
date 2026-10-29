@interface NewMainFrameReportData : MMObject
+ (void)ReportMainFrameLeftSlideOption:(unsigned int)arg1 andSession:(id)arg2;
+ (void)ReportMainFrameLeftSlideOption:(unsigned int)arg1 andSession:(id)arg2 guideOption:(long long)arg3;
+ (void)ReportLeftSlideSetSessionUnRead:(id)arg1;
+ (void)ReportLeftSlideSetSessionRead:(id)arg1;
+ (void)ReportLeftSlideSessionDelete:(id)arg1 isConfirmed:(BOOL)arg2;
+ (void)ReportLeftSlideSessionUnfollow:(id)arg1;
+ (void)ReportLeftSlideSessionHide:(id)arg1 isConfirmed:(BOOL)arg2 hasGuideView:(BOOL)arg3;
+ (void)ReportLeftSlideSessionMenuAppear:(id)arg1;
@end

