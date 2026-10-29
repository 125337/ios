@interface WAReportWidgetBaseItem : WAReportBaseItem
{
    unsigned int _widgetType; // +0x8
    NSString * _requestKey; // +0x10
}
+ (id)itemWithAppId:(id)arg1 version:(long long)arg2 state:(unsigned long long)arg3 widgetType:(unsigned int)arg4 requestKey:(id)arg5;
- (void)makeSafeString;
- (unsigned int)widgetType;
- (void)setWidgetType:(unsigned int)arg1;
- (id)requestKey;
- (void)setRequestKey:(id)arg1;
- (void).cxx_destruct;
@end
