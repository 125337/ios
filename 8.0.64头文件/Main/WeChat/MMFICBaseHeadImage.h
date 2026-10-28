@interface MMFICBaseHeadImage : NSObject <FICEntity>
{
    NSString * _usrName; // +0x8
    NSString * _sourceImgUrl; // +0x10
    NSString * _entityUUID; // +0x18
    NSString * _sourceImageUUID; // +0x20
    unsigned int _eliminationFactor; // +0x28
    NSString * _formatName; // +0x30
}
+ (id)genFICEntity:(id)arg1;
- (id)init;
- (id)entityUUID;
- (id)sourceImageUUID;
- (void)setUsrName:(id)arg1;
- (void)setSourceImgUrl:(id)arg1;
- (id)sourceImage;
- (id /* block */)drawingBlockForImage:(id)arg1;
- (id)usrName;
- (id)sourceImgUrl;
- (unsigned int)eliminationFactor;
- (void)setEliminationFactor:(unsigned int)arg1;
- (id)formatName;
- (void).cxx_destruct;
@end
