@interface WCFinderOpenCoverVCParams : NSObject
{
    int _coverShowStyle; // +0x8
    NSURL * _photoCoverUrl; // +0x10
    double _coverTimeStamp; // +0x18
    WCFinderCropRectModel * _cropRectModel; // +0x20
}
- (id)photoCoverUrl;
- (void)setPhotoCoverUrl:(id)arg1;
- (double)coverTimeStamp;
- (void)setCoverTimeStamp:(double)arg1;
- (int)coverShowStyle;
- (void)setCoverShowStyle:(int)arg1;
- (id)cropRectModel;
- (void)setCropRectModel:(id)arg1;
- (void).cxx_destruct;
@end
