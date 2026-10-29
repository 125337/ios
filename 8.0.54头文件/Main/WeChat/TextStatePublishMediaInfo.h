@interface TextStatePublishMediaInfo : NSObject
{
    BOOL _mediaBlur; // +0x8
    BOOL _canEditBlur; // +0x9
    BOOL _canEditLive; // +0xa
    unsigned int _mediaSource; // +0xc
    unsigned int _mediaType; // +0x10
    unsigned int _textStateCreateTime; // +0x14
    MMTextStateMediaItem * _imageLocalItem; // +0x18
    MMTextStateVideoItem * _videoLocalItem; // +0x20
    MMTextStateMediaItem * _mediaItem; // +0x28
    NSString * _textStateUsername; // +0x30
    unsigned long long _mediaDuration; // +0x38
    CGSize _mediaScreenSize; // +0x40
}
+ (id)mediaInfoFromUsername:(id)arg1 textState:(id)arg2;
+ (id)mediaInfoFromImageItem:(id)arg1;
+ (id)mediaInfoFromVideoItem:(id)arg1;
+ (id)mediaInfoFromLivePhotoItem:(id)arg1;
- (id)init;
- (id)generatePublishedTextState;
- (unsigned int)mediaSource;
- (void)setMediaSource:(unsigned int)arg1;
- (unsigned int)mediaType;
- (void)setMediaType:(unsigned int)arg1;
- (id)imageLocalItem;
- (void)setImageLocalItem:(id)arg1;
- (id)videoLocalItem;
- (void)setVideoLocalItem:(id)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (BOOL)mediaBlur;
- (void)setMediaBlur:(BOOL)arg1;
- (CGSize)mediaScreenSize;
- (void)setMediaScreenSize:(CGSize)arg1;
- (unsigned int)textStateCreateTime;
- (void)setTextStateCreateTime:(unsigned int)arg1;
- (id)textStateUsername;
- (void)setTextStateUsername:(id)arg1;
- (unsigned long long)mediaDuration;
- (void)setMediaDuration:(unsigned long long)arg1;
- (BOOL)canEditBlur;
- (void)setCanEditBlur:(BOOL)arg1;
- (BOOL)canEditLive;
- (void)setCanEditLive:(BOOL)arg1;
- (void).cxx_destruct;
@end

