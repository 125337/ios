@interface MJShootAIGCTaskCreationResponse : NSObject
{
    BOOL _showLongWaitButton; // +0x8
    BOOL _isFailed; // +0x9
    unsigned int _estimatedAigcWaitTime; // +0xc
    OMJAIGCSubmitResponse * _submitResponse; // +0x10
}
- (id)submitResponse;
- (void)setSubmitResponse:(id)arg1;
- (unsigned int)estimatedAigcWaitTime;
- (void)setEstimatedAigcWaitTime:(unsigned int)arg1;
- (BOOL)showLongWaitButton;
- (void)setShowLongWaitButton:(BOOL)arg1;
- (BOOL)isFailed;
- (void)setIsFailed:(BOOL)arg1;
- (void).cxx_destruct;
@end
