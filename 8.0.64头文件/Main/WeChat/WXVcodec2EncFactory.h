@interface WXVcodec2EncFactory : NSObject <TAVSourceSoftEncoderFactory>
- (void *)createHEVCEncoder;
- (void)destroyHEVCEncoder:(void *)arg1;
@end
