@interface TextStatePublishTask : NSObject <PBCoding, IMMTextStateMediaMgrExt>
{
    BOOL _hasFetchedLocation; // +0x8
    unsigned int _state; // +0xc
    id <TextStatePublishTaskDeletate> _delegate; // +0x10
    TextStateModel * _textState; // +0x18
    TextStatePublishParameter * _parameter; // +0x20
    NSString * _taskId; // +0x28
    NSString * _errorMessage; // +0x30
    MMTextStateMediaItem * _associateImageItem; // +0x38
    MMTextStateVideoItem * _associateVideoItem; // +0x40
    NSString * _mediaId; // +0x48
    WCCgiBlockHelper * _cgiBlockHelper; // +0x50
    MMLocatingCoordinateLogic * _locationLogic; // +0x58
}
+ (void)PBArrayAdd_textState;
+ (void)PBArrayAdd_taskId;
+ (void)PBArrayAdd_state;
+ (void)PBArrayAdd_errorMessage;
+ (void)PBArrayAdd_parameter;
+ (void)initialize;
+ (id)generateClientMessageId;
+ (void)setFirstTextStateExpireTime:(unsigned int)arg1;
- (id)getPBPropertyTable;
- (id)initWithTextState:(id)arg1 associateMediaItem:(id)arg2 parameter:(id)arg3;
- (void)prepare;
- (BOOL)startTask;
- (void)privateStartTask;
- (id)reportObject;
- (id)description;
- (BOOL)isEqualToTask:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)needRequestLocation;
- (id)locationLogic;
- (void)requestLocation;
- (BOOL)needUploadMedia;
- (void)uploadMedia;
- (void)onTextStateMediaUploadSuccess:(id)arg1;
- (void)onTextStateMediaUploadFail:(id)arg1;
- (void)requestPublishing;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)textState;
- (void)setTextState:(id)arg1;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned int)state;
- (void)setState:(unsigned int)arg1;
- (id)errorMessage;
- (void)setErrorMessage:(id)arg1;
- (id)associateImageItem;
- (void)setAssociateImageItem:(id)arg1;
- (id)associateVideoItem;
- (void)setAssociateVideoItem:(id)arg1;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (BOOL)hasFetchedLocation;
- (void)setHasFetchedLocation:(BOOL)arg1;
- (id)cgiBlockHelper;
- (void)setCgiBlockHelper:(id)arg1;
- (void)setLocationLogic:(id)arg1;
- (void).cxx_destruct;
@end

