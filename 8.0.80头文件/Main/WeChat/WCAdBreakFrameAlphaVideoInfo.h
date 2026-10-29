@interface WCAdBreakFrameAlphaVideoInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    int _videoCompositeType; // +0x8
    WCAdVideoPlayModeInfo * _playModeInfo; // +0x10
    WCMediaItem * _mediaItem; // +0x18
    WCMediaItem * _oneToOneHighMediaItem; // +0x20
    WCMediaItem * _oneToOneLowMediaItem; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchBreakFrameMediaId;
- (id)fetchAvailableMediaItem;
- (id)playModeInfo;
- (void)setPlayModeInfo:(id)arg1;
- (int)videoCompositeType;
- (void)setVideoCompositeType:(int)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (id)oneToOneHighMediaItem;
- (void)setOneToOneHighMediaItem:(id)arg1;
- (id)oneToOneLowMediaItem;
- (void)setOneToOneLowMediaItem:(id)arg1;
- (void).cxx_destruct;
@end
