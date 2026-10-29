@interface QMarkerCalloutView : QOverlayView
{
    NSString * _iconPath; // +0x8
    NSString * _imgInstruction; // +0x10
    QMarkerView * _parentMarkerView; // +0x18
    UIImage * _calloutImage; // +0x20
}
+ (void)loadCaloutViewImageWithQMarkerView:(id)arg1 withCallback:(id /* block */)arg2;
+ (id)getImageFromTitle:(id)arg1 andSubtitle:(id)arg2;
+ (double)calculateStringDrawingWidth:(id)arg1 fontSize:(double)arg2;
- (id)iconPath;
- (void)setIconPath:(id)arg1;
- (id)imgInstruction;
- (void)setImgInstruction:(id)arg1;
- (id)parentMarkerView;
- (void)setParentMarkerView:(id)arg1;
- (id)calloutImage;
- (void)setCalloutImage:(id)arg1;
- (void).cxx_destruct;
@end
