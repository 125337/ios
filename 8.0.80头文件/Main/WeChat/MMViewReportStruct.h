@interface MMViewReportStruct : NSObject
{
    BOOL _checkViewExposure; // +0x8
    BOOL _checkBtnNoResponse; // +0x9
    BOOL _checkColor; // +0xa
    int _bgColor; // +0xc
    NSString * _viewId; // +0x10
    long long _event; // +0x18
    NSString * _customKey; // +0x20
}
+ (id)ViewReportStructWithViewId:(id)arg1 checkViewExposure:(BOOL)arg2 checkBtnNoResponse:(BOOL)arg3 checkColor:(BOOL)arg4 bgColor:(int)arg5 event:(long long)arg6 customKey:(id)arg7;
- (id)initWithViewId:(id)arg1 checkViewExposure:(BOOL)arg2 checkBtnNoResponse:(BOOL)arg3 checkColor:(BOOL)arg4 bgColor:(int)arg5 event:(long long)arg6 customKey:(id)arg7;
- (id)description;
- (id)viewId;
- (BOOL)checkViewExposure;
- (BOOL)checkBtnNoResponse;
- (BOOL)checkColor;
- (int)bgColor;
- (long long)event;
- (id)customKey;
- (void).cxx_destruct;
@end
