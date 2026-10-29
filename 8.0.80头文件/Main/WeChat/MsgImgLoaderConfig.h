@interface MsgImgLoaderConfig : NSObject
{
    BOOL _prefersHighDynamicRange; // +0x8
    CMessageWrap * _msgWrap; // +0x10
}
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (BOOL)prefersHighDynamicRange;
- (void)setPrefersHighDynamicRange:(BOOL)arg1;
- (void).cxx_destruct;
@end
