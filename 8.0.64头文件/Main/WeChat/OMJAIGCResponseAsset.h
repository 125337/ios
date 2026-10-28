@interface OMJAIGCResponseAsset : NSObject
{
    NSArray * _mediaFiles; // +0x8
    unsigned long long _spliceType; // +0x10
    NSDictionary * _extraParams; // +0x18
}
- (id)initWithMediaFiles:(id)arg1 spliceType:(unsigned long long)arg2 extraParams:(id)arg3;
- (id)mediaFiles;
- (void)setMediaFiles:(id)arg1;
- (unsigned long long)spliceType;
- (void)setSpliceType:(unsigned long long)arg1;
- (id)extraParams;
- (void)setExtraParams:(id)arg1;
- (void).cxx_destruct;
@end
