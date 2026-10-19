');query.setAttribute('tabindex',compact?'-1':'0');
  gridTop=chromeExpandedGridTop-56*progress+(searchPinned?12:0);
}
function revealSearchResults(){grid.style.marginTop='12px';gridTop=(chromeExpandedGridTop??gridTop)+12}
let searchTransitionTimer=0;function animateSearchChrome(){const header=document.getElementById('feed-header');header?.classList.toggle('search-transition',true);if(searchTransitionTimer)clearTimeout(searchTransitionTimer);searchTransitionTimer=setTimeout(()=>{header?.classList.toggle('search-transition',false);searchTransitionTimer=0},380)}
function expandSearch(){animateSearchChrome();searchPinned=true;searchProgress=-1;updateSearchChrome();revealSearchResults();query.focus?.({preventScroll:true})}
query.addEventListener('focus',()=>{searchPinned=true;updateSearchChrome();revealSearchResults()});
query.addEventListener('blur',()=>{animateSearchChrome();searchPinned=false;searchDocked=(window.scrollY||0)>8;grid.style.marginTop='';searchProgress=-1;updateSearchChrome();scheduleVisible()});
document.getElementById('feed-header')?.addEventListener('transitionend',e=>{if(e.propertyName!=='height')return;gridTop=grid.getBoundingClientRect().top+(window.scrollY||0);chromeExpandedGridTop=gridTop+56*Math.max(0,searchProgress)-(searchPinned?12:0);scheduleVisible()});
const searchControl=document.getElementById('search-control');
searchControl?.addEventListener('click',()=>{if(searchProgress>.8)expandSearch()});
searchControl?.addEventListener('keydown',e=>{if(e.key==='Enter'||e.key===' '){e.preventDefault();expandSearch()}});

function setMessageCount(count){const badge=document.getElementById('message-count');if(!badge)return;badge.hidden=count<=0;badge.textContent=count>99?'99+':String(count)}
function send(action,id){window.webkit?.messageHandlers?.moments?.postMessage({action,id:id||''})}
function showStatus(s){const status=document.getElementById('status');if(status.textContent===s&&status.hidden===!s)return;status.textContent=s;status.hidden=!s;if(columnPositions.some(c=>c.length)){gridTop=grid.getBoundingClientRect().top+(window.scrollY||0);scheduleVisible()}}
function clearFeed(){if(pagingRetryTimer&&typeof clearTimeout==='function')clearTimeout(pagingRetryTimer);pagingRetryTimer=0;pagingRetryAttempts=0;pagingHeadLoading=false;pagingRetryRequired=false;pagingRetryAfter=0;feed=[];feedByID.clear();cards.clear();ratios.clear();columnForID.clear();grid.style.height='';lastVisible='';columnPositions=[[],[]];layoutWidth=0;grid.replaceChildren(element('div','skeleton'),element('div','skeleton'))}
function preserveNewerCover(p,patch){return p&&(p.coverVersion||0)>(patch.coverVersion||0)?{...patch,image:p.image,coverVersion:p.coverVersion}:patch}
function setFeed(items,preferLatest=false){
  if(!items.length){if(!feed.length)scheduleVisible();return}
  items=items.map(p=>preserveNewerCover(feedByID.get(p.id),p));
  const incoming=new Map(items.map(p=>[p.id,p]));
  const ordered=preferLatest?[...items,...feed.filter(p=>!incoming.has(p.id))]:feed.map(p=>incoming.get(p.id)||p);
  if(preferLatest)columnForID.clear();
  const existing=new Set(ordered.map(p=>p.id));
  for(const p of items)if(!existing.has(p.id)){ordered.push(p);existing.add(p.id)}
  feed=ordered;feedByID.clear();for(const p of feed)feedByID.set(p.id,p);render();
  if(typeof requestAnimationFrame==='function')requestAnimationFrame(requestMoreIfNeeded);
}
function schedulePagingRetry(){
  if(pagingRetryTimer||pagingRetryAttempts>3||typeof setTimeout!=='function')return;
  const delay=Math.min(1000*2**Math.max(0,pagingRetryAttempts-1),4000);
  pagingRetryTimer=setTimeout(()=>{pagingRetryTimer=0;if(pagingExhausted||!pagingRetryRequired)return;if(pagingHeadLoading){schedulePagingRetry();return}pagingRetryRequired=false;requestMoreIfNeeded()},delay);
}
function setPaging(loading,exhausted,retryRequired=false,headLoading=false){
  const wasHead=pagingHeadLoading;pagingHeadLoading=headLoading;pagingLoading=loading;pagingExhausted=exhausted;
  if(retryRequired&&!pagingRetryRequired){pagingRetryAfter=Date.now()+5000;pagingRetryAttempts++}
  pagingRetryRequired=retryRequired;
  if(!retryRequired&&!loading&&!exhausted)pagingRetryAttempts=0;
  if(exhausted&&pagingRetryTimer&&typeof clearTimeout==='function'){clearTimeout(pagingRetryTimer);pagingRetryTimer=0}
  if(retryRequired&&!exhausted)schedulePagingRetry();
  const sentinel=document.getElementById('sentinel');if(sentinel)sentinel.classList.toggle('loading',loading);
  if(wasHead&&!headLoading&&typeof requestAnimationFrame==='function')requestAnimationFrame(requestMoreIfNeeded);
}
function requestMoreIfNeeded(){const sentinel=document.getElementById('sentinel');if(!sentinel||pagingLoading||pagingExhausted||pagingRetryRequired||pagingHeadLoading)return;if(sentinel.getBoundingClientRect().top>window.innerHeight+1800)return;pagingLoading=true;send('more')}
function visibleIDsForViewport(){
  const viewportTop=(window.scrollY||0)-gridTop,top=viewportTop-300,bottom=viewportTop+window.innerHeight+Math.max(1800,window.innerHeight*2),ids=[];
  for(const positions of columnPositions){
    let lo=0,hi=positions.length;
    while(lo<hi){const mid=(lo+hi)>>1;if(positions[mid].bottom<top)lo=mid+1;else hi=mid}
    for(let i=lo;i<positions.length&&positions[i].top<bottom;i++)ids.push(positions[i].id);
  }
  return ids.slice(0,40);
}
function reportSeenViewport(){
  const viewportTop=(window.scrollY||0)-gridTop,headerHeight=Math.max(0,(chromeExpandedGridTop??gridTop)-56*Math.max(0,searchProgress));
  const top=viewportTop+headerHeight,bottom=viewportTop+window.innerHeight-84,ids=[];
  for(const column of columnPositions){let lo=0,hi=column.length;while(lo<hi){const mid=(lo+hi)>>1;if(column[mid].bottom<top)lo=mid+1;else hi=mid}for(let i=lo;i<column.length&&column[i].top<bottom;i++){const row=column[i];if(Math.min(row.bottom,bottom)-Math.max(row.top,top)>=48)ids.push(row.id)}}
  const key=ids.join(',');if(ids.length&&key!==lastSeenViewport){lastSeenViewport=key;window.webkit?.messageHandlers?.moments?.postMessage({action:'seen',ids})}
}
function scheduleVisible(){if(typeof requestAnimationFrame!=='function'||visibleFrame)return;visibleFrame=requestAnimationFrame(()=>{
  visibleFrame=0;if(scrollSignalPending&&Date.now()-lastScrollSignal>=120){scrollSignalPending=false;lastScrollSignal=Date.now();send('scrolling')}requestMoreIfNeeded();updateSearchChrome();reportSeenViewport();
  const ids=visibleIDsForViewport(),key=ids.join(',');
  if(key!==lastVisible){for(const id of ids){const card=cards.get(id);if(card)card.parts.photo.loading='eager'}lastVisible=key;window.webkit?.messageHandlers?.moments?.postMessage({action:'visible',ids})}
})}
if(typeof IntersectionObserver!=='undefined'){const observer=new IntersectionObserver(entries=>{if(entries.some(e=>e.isIntersecting))requestMoreIfNeeded()},{rootMargin:'1800px'});observer.observe(document.getElementById('sentinel'))}
document.addEventListener('scroll',()=>{scrollSignalPending=true;closeAuthorMenu();if(pagingRetryRequired&&Date.now()>=pagingRetryAfter)pagingRetryRequired=false;scheduleVisible()},{passive:true});
function element(tag,cls,text){const e=document.createElement(tag);e.className=cls;if(text!==undefined)e.textContent=text;return e}
function setHeaderSize(scale){const value=Number(scale);document.querySelector('.my-moments')?.style.setProperty('--brand-scale',String(Number.isFinite(value)?Math.max(.6,Math.min(1.4,value)):1))}
function setHeaderBrand(values){setHeaderSize(values?.scale??1);const button=document.querySelector('.my-moments');if(!button)return;const text=typeof values?.text==='string'&&values.text.trim()?values.text:'