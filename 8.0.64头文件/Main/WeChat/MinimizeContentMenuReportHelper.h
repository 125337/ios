@interface MinimizeContentMenuReportHelper : NSObject
{
    NSString * _viewId; // +0x8
    long long _scene; // +0x10
    unsigned long long _btnRow; // +0x18
    unsigned long long _btnIndex; // +0x20
}
- (id)initWithViewId:(id)arg1 scene:(long long)arg2 btnRow:(unsigned long long)arg3 btnIdex:(unsigned long long)arg4;
- (id)initWithViewId:(id)arg1 scene:(long long)arg2 btnReranged:(BOOL)arg3;
- (void)onExp;
- (void)onClick;
- (id)viewId;
- (void)setViewId:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (unsigned long long)btnRow;
- (void)setBtnRow:(unsigned long long)arg1;
- (unsigned long long)btnIndex;
- (void)setBtnIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
