@interface AmbViewInfo : NSObject
{
    NSString * _viewId; // +0x8
    NSString * _bitmapToBase64; // +0x10
    NSString * _containerPage; // +0x18
    NSString * _content; // +0x20
    long long _left; // +0x28
    long long _top; // +0x30
    long long _width; // +0x38
    long long _height; // +0x40
    AmbBindReportInfo * _bindReportInfo; // +0x48
}
- (id)init;
- (id)toDic;
- (id)viewId;
- (void)setViewId:(id)arg1;
- (id)bitmapToBase64;
- (void)setBitmapToBase64:(id)arg1;
- (id)containerPage;
- (void)setContainerPage:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (long long)left;
- (void)setLeft:(long long)arg1;
- (long long)top;
- (void)setTop:(long long)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (id)bindReportInfo;
- (void)setBindReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
