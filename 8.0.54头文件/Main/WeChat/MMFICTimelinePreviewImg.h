@interface MMFICTimelinePreviewImg : NSObject <FICEntity>
{
    WCMediaItem * _mediaItem; // +0x8
    NSString * _entityUUID; // +0x10
    NSString * _sourceImageUUID; // +0x18
    unsigned int _eliminationFactor; // +0x20
}
+ (id)genFICEntity:(id)arg1;
- (id)init;
- (void)setMediaItem:(id)arg1;
- (id)entityUUID;
- (id)sourceImageUUID;
- (id)sourceImage;
- (id)formatName;
- (id /* block */)drawingBlockForImage:(id)arg1;
- (id)mediaItem;
- (unsigned int)eliminationFactor;
- (void)setEliminationFactor:(unsigned int)arg1;
- (void).cxx_destruct;
@end

