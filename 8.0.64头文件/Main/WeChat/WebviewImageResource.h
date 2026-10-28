@interface WebviewImageResource : NSObject
{
    BOOL _isGif; // +0x8
    MMImage * _image; // +0x10
    MMImageExifLogInfo * _exifLogInfo; // +0x18
}
- (id)image;
- (void)setImage:(id)arg1;
- (id)exifLogInfo;
- (void)setExifLogInfo:(id)arg1;
- (BOOL)isGif;
- (void)setIsGif:(BOOL)arg1;
- (void).cxx_destruct;
@end
