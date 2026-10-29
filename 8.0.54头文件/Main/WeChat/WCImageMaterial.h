@interface WCImageMaterial : NSObject
{
    UIImage * _image; // +0x8
    MMAsset * _asset; // +0x10
    WCPlayerPlayArgs * _playerArgs; // +0x18
}
- (id)image;
- (void)setImage:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)playerArgs;
- (void)setPlayerArgs:(id)arg1;
- (void).cxx_destruct;
@end

