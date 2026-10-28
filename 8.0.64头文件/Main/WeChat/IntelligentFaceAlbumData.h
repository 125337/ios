@interface IntelligentFaceAlbumData : IntelligentMediaItem
{
    BOOL _bIsPoliticalLeader; // +0x28
    unsigned int _faceClusterTime; // +0x2c
    UIImage * _picImage; // +0x30
    NSMutableArray * _arrLabelId; // +0x38
    NSMutableDictionary * _dicFaceAlbumLable; // +0x40
    double _imageWidth; // +0x48
    double _imageHeight; // +0x50
}
- (id)picImage;
- (void)setPicImage:(id)arg1;
- (id)arrLabelId;
- (void)setArrLabelId:(id)arg1;
- (id)dicFaceAlbumLable;
- (void)setDicFaceAlbumLable:(id)arg1;
- (double)imageWidth;
- (void)setImageWidth:(double)arg1;
- (double)imageHeight;
- (void)setImageHeight:(double)arg1;
- (unsigned int)faceClusterTime;
- (void)setFaceClusterTime:(unsigned int)arg1;
- (BOOL)bIsPoliticalLeader;
- (void)setBIsPoliticalLeader:(BOOL)arg1;
- (void).cxx_destruct;
@end
