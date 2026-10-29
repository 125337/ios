@interface MMImageLoaderReqContext : NSObject
{
    BOOL _isRetry; // +0x8
    BOOL _isDownLoadHevc; // +0x9
    BOOL _isReqHevc; // +0xa
    BOOL _isPreload; // +0xb
    BOOL _isOpenBlankMonitor; // +0xc
    unsigned int _imgType; // +0x10
    unsigned int _hevcIdKeyID; // +0x14
    unsigned int _hevcKvStatId; // +0x18
    unsigned int _posInTL; // +0x1c
    NSURL * _imgUrl; // +0x20
    unsigned long long _fromType; // +0x28
    NSMutableDictionary * _extraInfo; // +0x30
    MMHevcHelper * _hevcHelper; // +0x38
}
- (id)initWithImgType:(unsigned int)arg1 imgUrl:(id)arg2 fromType:(unsigned long long)arg3 hevcIdKeyID:(unsigned int)arg4 hevcKvStatId:(unsigned int)arg5 posInTL:(unsigned int)arg6 isOpenBlankMonitor:(BOOL)arg7;
- (BOOL)isDownLoadHevc;
- (BOOL)isReqHevc;
- (unsigned int)imgType;
- (void)setImgType:(unsigned int)arg1;
- (id)imgUrl;
- (void)setImgUrl:(id)arg1;
- (unsigned long long)fromType;
- (void)setFromType:(unsigned long long)arg1;
- (unsigned int)hevcIdKeyID;
- (void)setHevcIdKeyID:(unsigned int)arg1;
- (unsigned int)hevcKvStatId;
- (void)setHevcKvStatId:(unsigned int)arg1;
- (BOOL)isRetry;
- (void)setIsRetry:(BOOL)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void)setIsDownLoadHevc:(BOOL)arg1;
- (void)setIsReqHevc:(BOOL)arg1;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg1;
- (BOOL)isOpenBlankMonitor;
- (unsigned int)posInTL;
- (id)hevcHelper;
- (void)setHevcHelper:(id)arg1;
- (void).cxx_destruct;
@end

