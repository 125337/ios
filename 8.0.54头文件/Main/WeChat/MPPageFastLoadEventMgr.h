@interface MPPageFastLoadEventMgr : NSObject
{
    NSSet * _setEventWithTmplType; // +0x8
    NSMutableDictionary * _dictTmplDownloadState; // +0x10
}
- (id)init;
- (void)notifyPageFastLoadTemplateDownloadEvent:(unsigned int)arg1 templateType:(unsigned int)arg2 downloadState:(unsigned int)arg3 checkTmplInfo:(id)arg4 templateInfo:(id)arg5;
- (void)notifyPageFastLoadTemplateDownloadEvent:(unsigned int)arg1 templateType:(unsigned int)arg2 downloadState:(unsigned int)arg3 checkTmplInfo:(id)arg4 templateInfo:(id)arg5 detailDesc:(id)arg6;
- (unsigned int)downloadStateWithTemplateType:(unsigned int)arg1;
- (id)setEventWithTmplType;
- (void)setSetEventWithTmplType:(id)arg1;
- (id)dictTmplDownloadState;
- (void)setDictTmplDownloadState:(id)arg1;
- (void).cxx_destruct;
@end

