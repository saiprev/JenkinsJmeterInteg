Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");
	
	thinktime(3);

	web_add_cookie("NID=110=Qq_EEoNogXACUPmlMDlqLUzHk4pYt7eEucVSF9-srQtY09wk9vUNv7U8ISHgAVo2AMncCYUpW-b5dEsMZq6CoQGsWo4Y_9KX7WP037FAF7ZFlPK-i84fnWB2V_qaELhb; DOMAIN=www.google.com");

	web_add_cookie("OGPC=65517568-1:; DOMAIN=www.google.com");

	web_add_cookie("NID=110=Qq_EEoNogXACUPmlMDlqLUzHk4pYt7eEucVSF9-srQtY09wk9vUNv7U8ISHgAVo2AMncCYUpW-b5dEsMZq6CoQGsWo4Y_9KX7WP037FAF7ZFlPK-i84fnWB2V_qaELhb; DOMAIN=apis.google.com");

	web_add_cookie("OGPC=65517568-2:; DOMAIN=apis.google.com");

	web_url("www.google.com", 
		"URL=http://www.google.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.google.com/xjs/_/js/k=xjs.s.en_US.q-iWVSGrK-k.O/m=sx,c,sb,cdos,cr,elog,hsm,jsa,r,qsm,d,csi/am=gEUYOV0wAOT_hJAwcAthgaSAiQMI/rt=j/d=1/t=zcms/rs=ACT90oEJMCMXb2FGRS3vB0-9xI0ld65y1Q", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		"Url=https://www.google.com/textinputassistant/tia.png", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		"Url=https://www.google.com/xjs/_/js/k=xjs.s.en_US.q-iWVSGrK-k.O/m=aa,abd,async,dvl,foot,fpe,ipv6,lu,m,sf,d3l/am=gEUYOV0wAOT_hJAwcAthgaSAiQMI/exm=sx,c,sb,cdos,cr,elog,hsm,jsa,r,qsm,d,csi/rt=j/d=1/ed=1/t=zcms/rs=ACT90oEJMCMXb2FGRS3vB0-9xI0ld65y1Q", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		"Url=https://ssl.gstatic.com/gb/images/i1_1967ca6a.png", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		"Url=https://www.gstatic.com/og/_/js/k=og.og2.en_US.RLKxBl-bUOY.O/rt=j/m=def/exm=in,fot/d=1/ed=1/rs=AA2YrTuKEg04-QHiHL4dKsTDiGhZHa9GKw", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		"Url=https://apis.google.com/_/scs/abc-static/_/js/k=gapi.gapi.en.ellQXbSf-LI.O/m=gapi_iframes,googleapis_client,plusone/rt=j/sv=1/d=1/ed=1/am=AAg/rs=AHpOoo9jm0At0b0B7I7G3MSvlepU00mZfA/cb=gapi.loaded_0", "Referer=https://www.google.com/?gws_rd=ssl", ENDITEM, 
		LAST);

	web_add_cookie("OGPC=65517568-2:; DOMAIN=www.google.com");

/* Added by Async CodeGen.
ID=LongPoll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://www.google.com/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=1&gs_id=6&q=p&xhr=t
	https://www.google.com/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=2&gs_id=a&q=pe&xhr=t
	https://www.google.com/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=3&gs_id=e&q=per&xhr=t
	https://www.google.com/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=4&gs_id=i&q=perf&xhr=t
	https://www.google.com/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=5&gs_id=m&q=perfo&xhr=t
	https://www.google.com/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=6&gs_id=p&q=perfor&xhr=t
	https://www.google.com/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=7&gs_id=u&q=perfora&xhr=t
	https://www.google.com/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=8&gs_id=y&q=perforan&xhr=t

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	LongPoll_0_RequestCB
	LongPoll_0_ResponseCB
 */
	web_reg_async_attributes("ID=LongPoll_0", 
		"Pattern=LongPoll", 
		"URL=https://www.google.com/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=1&gs_id=6&q=p&xhr=t", 
		"RequestCB=LongPoll_0_RequestCB", 
		"ResponseCB=LongPoll_0_ResponseCB", 
		LAST);

/* URLs removed from EXTRARES by Async CodeGen.
ID = LongPoll_0
URLs: 
	/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=1&gs_id=6&q=p&xhr=t
	/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=2&gs_id=a&q=pe&xhr=t
	/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=3&gs_id=e&q=per&xhr=t
	/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=4&gs_id=i&q=perf&xhr=t
	/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=5&gs_id=m&q=perfo&xhr=t
	/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=6&gs_id=p&q=perfor&xhr=t
	/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=7&gs_id=u&q=perfora&xhr=t
	/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=8&gs_id=y&q=perforan&xhr=t
 */
	web_url("gen_204",
		"URL=https://www.google.com/gen_204?atyp=csi&ei=LriTWfC1L4SDjwSrg5qgBw&s=webhp&imc=3&imn=3&imp=2&adh&ima=2&ime=0&rt=aft.472%2Cdcl.133%2Ciml.472%2Col.6975%2Cprt.107%2Cxjs.977%2Cxjsee.977%2Cxjses.893%2Cxjsls.63%2Cwsrt.606%2Ccst.0%2Cdnst.0%2Crqst.23%2Crspt.23%2Crqstt.1%2Cunt.1%2Ccstt.1%2Cdit.739&zx=1502853174591",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://www.google.com/?gws_rd=ssl",
		"Snapshot=t3.inf",
		"Mode=HTML",
		EXTRARES,
		"Url=/images/nav_logo242.png","Referer=https://www.google.com/?gws_rd=ssl",ENDITEM,
		"Url=https://www.gstatic.com/og/_/ss/k=og.og2.1izpqxi7eswy5.L.X.O/m=lg/excm=in,fot/d=1/ed=1/rs=AA2YrTsxQtmYP-bVPW-L_se9ax2GV14Fpw","Referer=https://www.google.com/?gws_rd=ssl",ENDITEM,
		"Url=https://www.gstatic.com/og/_/js/k=og.og2.en_US.RLKxBl-bUOY.O/rt=j/m=lat/exm=in,fot,def/d=1/ed=1/rs=AA2YrTuKEg04-QHiHL4dKsTDiGhZHa9GKw","Referer=https://www.google.com/?gws_rd=ssl",ENDITEM,
		"Url=/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=1&gs_id=6&q=p&xhr=t","Referer=https://www.google.com/?gws_rd=ssl",ENDITEM,
		"Url=/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=7&gs_id=18&q=perform&xhr=t","Referer=https://www.google.com/?gws_rd=ssl",ENDITEM,
		"Url=/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=9&gs_id=1g&q=performan&xhr=t","Referer=https://www.google.com/?gws_rd=ssl",ENDITEM,
		"Url=/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=10&gs_id=1j&q=performanc&xhr=t","Referer=https://www.google.com/?gws_rd=ssl",ENDITEM,
		"Url=/complete/search?client=psy-ab&hl=en&gs_rn=64&gs_ri=psy-ab&cp=19&gs_id=2j&q=performance%20testing&xhr=t","Referer=https://www.google.com/?gws_rd=ssl",ENDITEM,
		LAST);

/* Added by Async CodeGen.
ID = LongPoll_0
 */
	web_stop_async("ID=LongPoll_0", 
		LAST);

	lr_start_transaction("Perfromance Testing");

	web_url("search", 
		"URL=https://www.google.com/search?site=&source=hp&q=performance+testing&oq=performance+testing&gs_l=psy-ab.3...22049.26364.0.27103.23.17.2.0.0.0.171.1084.0j9.9.0....0...1.1.64.psy-ab..12.11.1102...0j0i131k1j0i3k1j0i10k1.IJETVtOICAA", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/?gws_rd=ssl", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/gb/images/i1_1967ca6a.png", "Referer=https://www.google.com/search?site=&source=hp&q=performance+testing&oq=performance+testing&gs_l=psy-ab.3...22049.26364.0.27103.23.17.2.0.0.0.171.1084.0j9.9.0....0...1.1.64.psy-ab..12.11.1102...0j0i131k1j0i3k1j0i10k1.IJETVtOICAA", ENDITEM, 
		"Url=https://ssl.gstatic.com/ui/v1/disclosure/grey-disclosure-arrow-up-down.png", "Referer=https://www.google.com/search?site=&source=hp&q=performance+testing&oq=performance+testing&gs_l=psy-ab.3...22049.26364.0.27103.23.17.2.0.0.0.171.1084.0j9.9.0....0...1.1.64.psy-ab..12.11.1102...0j0i131k1j0i3k1j0i10k1.IJETVtOICAA", ENDITEM, 
		LAST);

	web_url("client_204", 
		"URL=https://www.google.com/client_204?&atyp=i&biw=1366&bih=683&ei=TLiTWcH2MoWwjwSi4b74CQ", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/search?site=&source=hp&q=performance+testing&oq=performance+testing&gs_l=psy-ab.3...22049.26364.0.27103.23.17.2.0.0.0.171.1084.0j9.9.0....0...1.1.64.psy-ab..12.11.1102...0j0i131k1j0i3k1j0i10k1.IJETVtOICAA", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("gen_204_2", 
		"URL=https://www.google.com/gen_204?atyp=csi&ei=TLiTWcH2MoWwjwSi4b74CQ&s=web&imc=8&imn=8&imp=0&adh&ima=1&ime=0&rt=aft.511%2Cdcl.559%2Ciml.511%2Col.604%2Cprt.511%2Cxjs.929%2Cxjsee.928%2Cxjses.862%2Cxjsls.510%2Cwsrt.1392%2Ccst.0%2Cdnst.0%2Crqst.597%2Crspt.590%2Crqstt.1268%2Cunt.32%2Ccstt.32%2Cdit.1951&zx=1502853197988", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/search?site=&source=hp&q=performance+testing&oq=performance+testing&gs_l=psy-ab.3...22049.26364.0.27103.23.17.2.0.0.0.171.1084.0j9.9.0....0...1.1.64.psy-ab..12.11.1102...0j0i131k1j0i3k1j0i10k1.IJETVtOICAA", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.gstatic.com/og/_/js/k=og.og2.en_US.RLKxBl-bUOY.O/rt=j/m=def/exm=in,fot/d=1/ed=1/rs=AA2YrTuKEg04-QHiHL4dKsTDiGhZHa9GKw", "Referer=https://www.google.com/search?site=&source=hp&q=performance+testing&oq=performance+testing&gs_l=psy-ab.3...22049.26364.0.27103.23.17.2.0.0.0.171.1084.0j9.9.0....0...1.1.64.psy-ab..12.11.1102...0j0i131k1j0i3k1j0i10k1.IJETVtOICAA", ENDITEM, 
		"Url=/xjs/_/js/k=xjs.s.en_US.q-iWVSGrK-k.O/m=aa,abd,aspn,async,dvl,foot,fpe,ipv6,lr,lu,m,sf,tl,vs,d3l,tnv,mrn,dob,kx,lrlb,me,atn/am=gEUYOV0wAOT_hJAwcAthgaSAiQMI/exm=sx,c,sb,cdos,cr,elog,hsm,jsa,r,qsm,d,csi/rt=j/d=1/ed=1/t=zcms/rs=ACT90oEJMCMXb2FGRS3vB0-9xI0ld65y1Q", "Referer=https://www.google.com/search?site=&source=hp&q=performance+testing&oq=performance+testing&gs_l=psy-ab.3...22049.26364.0.27103.23.17.2.0.0.0.171.1084.0j9.9.0....0...1.1.64.psy-ab..12.11.1102...0j0i131k1j0i3k1j0i10k1.IJETVtOICAA", ENDITEM, 
		LAST);

	web_add_cookie("OGPC=65517568-3:; DOMAIN=www.google.com");

	web_add_cookie("DV=k-oTylr403ceYNoFotw3anjA436Q3hU; DOMAIN=www.google.com");

	web_url("generate_204", 
		"URL=https://www.google.com/generate_204", 
		"Resource=0", 
		"Referer=https://www.google.com/search?site=&source=hp&q=performance+testing&oq=performance+testing&gs_l=psy-ab.3...22049.26364.0.27103.23.17.2.0.0.0.171.1084.0j9.9.0....0...1.1.64.psy-ab..12.11.1102...0j0i131k1j0i3k1j0i10k1.IJETVtOICAA", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("NID=110=Qq_EEoNogXACUPmlMDlqLUzHk4pYt7eEucVSF9-srQtY09wk9vUNv7U8ISHgAVo2AMncCYUpW-b5dEsMZq6CoQGsWo4Y_9KX7WP037FAF7ZFlPK-i84fnWB2V_qaELhb; DOMAIN=id.google.com");

	web_add_cookie("OGPC=65517568-3:; DOMAIN=id.google.com");

	web_url("Omtzb9t890C69tvxduPzGjAAAACbXgYHU5h9z5pfCFV9RiPxJT4NJ_F65lPRR5hjoGtxGv483iR4hPwSoxk4lsr-AAk", 
		"URL=https://id.google.com/verify/Omtzb9t890C69tvxduPzGjAAAACbXgYHU5h9z5pfCFV9RiPxJT4NJ_F65lPRR5hjoGtxGv483iR4hPwSoxk4lsr-AAk", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/search?site=&source=hp&q=performance+testing&oq=performance+testing&gs_l=psy-ab.3...22049.26364.0.27103.23.17.2.0.0.0.171.1084.0j9.9.0....0...1.1.64.psy-ab..12.11.1102...0j0i131k1j0i3k1j0i10k1.IJETVtOICAA", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.gstatic.com/og/_/js/k=og.og2.en_US.RLKxBl-bUOY.O/rt=j/m=lat/exm=in,fot,def/d=1/ed=1/rs=AA2YrTuKEg04-QHiHL4dKsTDiGhZHa9GKw", "Referer=https://www.google.com/search?site=&source=hp&q=performance+testing&oq=performance+testing&gs_l=psy-ab.3...22049.26364.0.27103.23.17.2.0.0.0.171.1084.0j9.9.0....0...1.1.64.psy-ab..12.11.1102...0j0i131k1j0i3k1j0i10k1.IJETVtOICAA", ENDITEM, 
		"Url=https://www.gstatic.com/og/_/ss/k=og.og2.1izpqxi7eswy5.L.X.O/m=lg/excm=in,fot/d=1/ed=1/rs=AA2YrTsxQtmYP-bVPW-L_se9ax2GV14Fpw", "Referer=https://www.google.com/search?site=&source=hp&q=performance+testing&oq=performance+testing&gs_l=psy-ab.3...22049.26364.0.27103.23.17.2.0.0.0.171.1084.0j9.9.0....0...1.1.64.psy-ab..12.11.1102...0j0i131k1j0i3k1j0i10k1.IJETVtOICAA", ENDITEM, 
		LAST);

	web_url("gen_204_3", 
		"URL=https://www.google.com/gen_204?atyp=i&ct=slh&cad=&ei=TLiTWcH2MoWwjwSi4b74CQ&m=HV&t=C&s=1&v=2&pv=0.8201544538585062&me=1:1502853198827,x:3,V,0,0,1366,683:0,N,1,TLiTWcH2MoWwjwSi4b74CQ:0,R,1,3,13,24,120,47:0,R,1,36,166,175,600,353:0,R,1,37,166,175,600,353:0,R,1,39,150,175,632,101:0,R,1,42,166,276,600,184:0,R,1,45,166,459,600,49:0,R,1,51,166,554,600,95:0,R,1,62,166,675,600,114:1,B,2032:6337,h,1,42,i:0,h,1,37,i:0,h,1,36,i:66,h,1,42,o:21,h,1,37,o:0,h,1,36,o:3038,e,B&zx=1502853208294", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/search?site=&source=hp&q=performance+testing&oq=performance+testing&gs_l=psy-ab.3...22049.26364.0.27103.23.17.2.0.0.0.171.1084.0j9.9.0....0...1.1.64.psy-ab..12.11.1102...0j0i131k1j0i3k1j0i10k1.IJETVtOICAA", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Perfromance Testing",LR_AUTO);

	web_add_cookie("s_mlsuk=zle994e; DOMAIN=www-proxy-pac.lmig.com");

	web_add_cookie("s_fid=13AFC304470CE5A2-1805064BB4D6F3B4; DOMAIN=www-proxy-pac.lmig.com");

	web_add_cookie("_ga=GA1.2.2142082718.1496339402; DOMAIN=www-proxy-pac.lmig.com");

	web_add_cookie("AMCV_02CE1B63578D36EE7F000101%40AdobeOrg=T; DOMAIN=www-proxy-pac.lmig.com");

	lr_think_time(13);

	web_url("EMIE-List.xml", 
		"URL=http://www-proxy-pac.lmig.com/EMIE-List.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(20);

	lr_start_transaction("Clk Second link");

	web_url("url", 
		"URL=https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=4&ved=0ahUKEwjBzMm35NrVAhUF2IMKHaKwD58QFghHMAM&url=https%3A%2F%2Fwww.guru99.com%2Fperformance-testing.html&usg=AFQjCNH117WH-H61UrudXqLlgzipZCUZLg", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/search?site=&source=hp&q=performance+testing&oq=performance+testing&gs_l=psy-ab.3...22049.26364.0.27103.23.17.2.0.0.0.171.1084.0j9.9.0....0...1.1.64.psy-ab..12.11.1102...0j0i131k1j0i3k1j0i10k1.IJETVtOICAA", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("gen_204_4", 
		"URL=https://www.google.com/gen_204?atyp=i&ct=slh&cad=&ei=TLiTWcH2MoWwjwSi4b74CQ&s=2&v=2&pv=0.8201544538585062&me=20:1502853208294,V,0,0,0,0:25627,U,25627:0,V,0,0,1366,683:510,S,170:0,R,1,69,166,717,593,71:0,R,1,70,166,816,600,114:456,h,1,62,i:506,h,1,62,o:240,h,1,62,i:2185,h,1,69,i:311,h,1,69,o:19,h,1,62,o:58,h,1,70,i:2628,G,1,70,358,4:6,c,524,650:7,e,C&zx=1502853240847", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/search?site=&source=hp&q=performance+testing&oq=performance+testing&gs_l=psy-ab.3...22049.26364.0.27103.23.17.2.0.0.0.171.1084.0j9.9.0....0...1.1.64.psy-ab..12.11.1102...0j0i131k1j0i3k1j0i10k1.IJETVtOICAA", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("performance-testing.html", 
		"URL=https://www.guru99.com/performance-testing.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=4&ved=0ahUKEwjBzMm35NrVAhUF2IMKHaKwD58QFghHMAM&url=https%3A%2F%2Fwww.guru99.com%2Fperformance-testing.html&usg=AFQjCNH117WH-H61UrudXqLlgzipZCUZLg", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://cdn.guru99.com/media/gantry5/assets/fonts/fontawesome-webfont.eot", ENDITEM, 
		"Url=https://cdn.guru99.com/media/jui/fonts/IcoMoon.eot", ENDITEM, 
		"Url=https://cdn.guru99.com/images/follow-us.png", ENDITEM, 
		"Url=https://pagead2.googlesyndication.com/pub-config/r20160913/ca-pub-6330153051175486.js", ENDITEM, 
		"Url=https://cdn.guru99.com/Customization/imagepopup/image/overlay.png", ENDITEM, 
		"Url=https://pagead2.googlesyndication.com/pagead/js/r20170807/r20170110/show_ads_impl.js", ENDITEM, 
		"Url=https://pagead2.googlesyndication.com/pagead/js/r20170807/r20170110/osd.js", ENDITEM, 
		"Url=https://contextual.media.net/dmedianet.js?cid=8CUQBB2U5&https=1", ENDITEM, 
		"Url=https://contextual.media.net/einslmedianet.js?cid=8CUQBB2U5&https=1&crid=441289839&size=641x481", ENDITEM, 
		"Url=https://contextual.media.net/px.gif?ch=1&rn=1", ENDITEM, 
		"Url=https://contextual.media.net/rtbspub?&prid=8PRHGG6T9&cid=8CUQBB2U5&crid=196378856&size=300x250&rp=1&vi=1502853254301689913&ugd=4&requrl=https%3A%2F%2Fwww.guru99.com%2Fperformance-testing.html&kwrf=http%3A%2F%2Fwww.google.com&useAppData=0&hlt=1&tr=0.4312136875149012", ENDITEM, 
		"Url=https://contextual.media.net/fcmdynet.js?&cid=8CUQBB2U5&cpcd=7xRa5ccNXLLzdohX57nd7w%3D%3D&crid=196378856&size=300x250&cc=US&sc=MA&https=1&vif=1&requrl=https%3A%2F%2Fwww.guru99.com%2Fperformance-testing.html&kwrf=http%3A%2F%2Fwww.google.com&nse=3&vi=1502853254301689913&lw=1&ugd=4&re=1&hlt=1&dfp=1&rtbs=1&nb=1", ENDITEM, 
		"Url=https://contextual.media.net/mediamain.html?&cid=8CUQBB2U5&cpcd=7xRa5ccNXLLzdohX57nd7w%3D%3D&crid=196378856&pid=8POTS5131&size=300x250&cpnet=yVb1sHm-0KKoFeunLBVJxeymNfoq5hwL1gNnun4fCwA%3D&cme="
		"lWPDhFmiZAy1wcTSSQnWx82K36lSFNWEnEM-9qPW8cPYehyuWAmFQyn6sPAwLh_-ZSM0BtqSTH0QFohFqyyCnG2qjTBrkItJQqxo95zqgFhZY-2QfbS_0Q5BBc36YK5dLe-rcXXNPoo%3D%7C%7CNDHRnZ9Gz3KXlI-i9OnZqQ%3D%3D%7C5gDUJdTGiJzedmq9hanWYg%3D%3D%7CN7fu2vKt8_s%3D%7CYdjFvixrVaGmhNeLt23xSzJJgRlcQrX3fn3-NTl4BLkhdXjEnsOyQsalAsXq7UBJWsKKU1EXwPw%3D%7CJf0d-WoAdPugZdiC0MCJNJau7I3ddLM8W8ylGHjbmIc%3D%7C&https=1&cc=US&bf=0&staticIframe=1&vif=1&nse=3&vi=1502853254301689913&lw=1&ugd=4&ib=0&nb=1", ENDITEM, 
		"Url=https://contextual.media.net/fcmdynet.js?&cid=8CUQBB2U5&cpcd=7xRa5ccNXLLzdohX57nd7w%3D%3D&crid=441289839&size=641x481&cc=US&sc=MA&https=1&vif=1&requrl=https%3A%2F%2Fwww.guru99.com%2Fperformance-testing.html&kwrf=http%3A%2F%2Fwww.google.com&nse=3&vi=1502853254697757815&lw=1&ugd=4&insl=1", ENDITEM, 
		"Url=https://s.mnet-ad.net/px.gif?ch=2&rn=1", ENDITEM, 
		"Url=https://contextual.media.net/mediamain.html?cid=8CUQBB2U5&cpcd=7xRa5ccNXLLzdohX57nd7w%3D%3D&crid=441289839&pid=8POTS5131&size=641x481&https=1&cpnet=yVb1sHm-0KKoFeunLBVJxbLJsChB73T7fmpYMZSGKaU%3D&cme="
		"e9kSeFpC_wTof47O3dVinVJA5OkOPo7xy7LDDxQWY1j7OSAKnkDZyDOrmCpC43dI1vwo1OJKxz5QfDzFUdDvIA5V3j-lyaQ652U8Y1zO5xFPC4SpUok_cjxAWJ_E3sy3k_iTAZ9pfrM%3D%7C%7CNDHRnZ9Gz3KXlI-i9OnZqQ%3D%3D%7C5gDUJdTGiJzedmq9hanWYg%3D%3D%7CN7fu2vKt8_s%3D%7CYdjFvixrVaGmhNeLt23xSzJJgRlcQrX3fn3-NTl4BLkhdXjEnsOyQsalAsXq7UBJWsKKU1EXwPw%3D%7CJf0d-WoAdPugZdiC0MCJNJau7I3ddLM8W8ylGHjbmIc%3D%7C&cc=US&bf=0&vif=1&ugd=4&nse=3&vi=1502853254697757815&nb=1", ENDITEM, 
		"Url=https://qsearch-a.akamaihd.net/bping.php?cid=8CUQBB2U5&crid=441289839&vi=1502853254697757815&ugd=4&lf=6&requrl=https%3A%2F%2Fwww.guru99.com%2Fperformance-testing.html&kwrf=http%3A%2F%2Fwww.google.com&cc=US&sc=MA&vsid=undefined&r=1502853254187&insl=1&rk=&hvsid=00001502853254185024067192905349", ENDITEM, 
		"Url=https://contextual.media.net/__media__/js/util/nrr.js?v=41", ENDITEM, 
		"Url=https://qsearch-a.akamaihd.net/bping.php?cid=8CUQBB2U5&crid=196378856&vi=1502853254301689913&ugd=4&lf=6&requrl=https%3A%2F%2Fwww.guru99.com%2Fperformance-testing.html&kwrf=http%3A%2F%2Fwww.google.com&cc=US&sc=MA&vsid=undefined&r=1502853254062&hvsid=00001502853254060024067192903297", ENDITEM, 
		"Url=https://medianet-d.openx.net/w/1.0/jstag?oxns=mNCM", ENDITEM, 
		"Url=https://medianet-d.openx.net/w/1.0/acj?cc=1&ai=67319e4c-5228-4880-a6aa-034f0c8c4cb4&o=5567244285&callback=OX_mNCM_5567244285&ju=https%3A//www.guru99.com/performance-testing.html&jr=https%3A//www.google.com/url%3Fsa%3Dt%26rct%3Dj%26q%3D%26esrc%3Ds%26source%3Dweb%26cd%3D4%26ved%3D0ahUKEwjBzMm35NrVAhUF2IMKHaKwD58QFghHMAM%26url%3Dhttps%253A%252F%252Fwww.guru99.com%252Fperformance-testing.html%26usg%3DAFQjCNH117WH-H61UrudXqLlgzipZCUZLg&auid=538751556&dims=&adxy=&res=1366x768x24&plg="
		"swf%2Csl%2Cshk%2Cpm&ch=utf-8&tz=240&ws=1366x683&ifr=0&tws=1366x683&vmt=1&bi=a5e3ef9e-5fe4-4646-8a95-481719fee74d&ba=1502853258&sd=1", ENDITEM, 
		"Url=https://qsearch-a.akamaihd.net/log?logid=kfk&evtid=rtbstl&url=https%3A%2F%2Fwww.guru99.com%2Fperformance-testing.html&domain=guru99.com&size=300x250&ext_user_id=0&iid=0&auction_id=b137944ec336469f9a1044b70228ecdf&ip=143.115.159.58&crid=196378856&b9b=1.0&rtbW=0&app_dis=0&dma=506&cc=US&rc=MA&bname=&bid_type=-1&bmlevel=0&mnet_segment=1.00&cmw=8&subBdr=1&dfp=1&source=2&dt=4", ENDITEM, 
		"Url=https://qsearch-a.akamaihd.net/rtblog.php?l3ch=4&&prid=8PRHGG6T9&cid=8CUQBB2U5&crid=196378856&pid=8PO794B5X&size=300x250&vi=1502853254301689913&ugd=4&requrl=https%3A%2F%2Fwww.guru99.com%2Fperformance-testing.html&kwrf=http%3A%2F%2Fwww.google.com&bdrid=8&subBdr=1&bdrct=1&adx=1&timeout=1&oref=http%3A%2F%2Fwww.google.com&kbbq=%26sde%3D1%26adepth%3D1%26ddepth%3D1&tdAdd[]="
		"%7C%40%7Csde%3D1%7C%40%7Cadepth%3D1%7C%40%7Cddepth%3D1%7C%40%7CopenxEnabled%3Dtrue%7C%40%7CopenxStatus%3D3%7C%40%7CopenxJSLoadTime%3D3653%7C%40%7CopenxAdFetchTime%3D243%7C%40%7CopenxReceived%3Dtrue&vgd_crefurl=https%3A%2F%2Fwww.google.com%2Furl%3Fsa%3Dt%26rct%3Dj%26q%3D%26esrc%3Ds%26source%3Dweb%26cd%3D4%26ved%3D0ahUKEwjBzMm35NrVAhUF2IMKHaKwD58QFghHMAM%26url%3Dhttps%3A%2F%2Fwww.guru99.com%2Fperformance-testing.html%26usg%3DAFQjCNH117WH-H61UrudXqLlgzipZCUZLg&hvsid=00001502853254060024067192903297", ENDITEM, 
		"Url=https://qsearch-a.akamaihd.net/bqi.php?&lf=3&cid=8CUQBB2U5&crid=196378856&pid=8PO794B5X&size=300x250&vi=1502853254301689913&ugd=4&requrl=https%3A%2F%2Fwww.guru99.com%2Fperformance-testing.html&kwrf=http%3A%2F%2Fwww.google.com&bdrid=8&subBdr=1&cc=US&sc=MA&hvsid=00001502853254060024067192903297", ENDITEM, 
		LAST);

	web_add_cookie("data=||||||||||||||||; DOMAIN=contextual.media.net");

	web_url("checksync.php", 
		"URL=https://contextual.media.net/checksync.php?&cv=31&cs=2&&cid=8CUQBB2U5&https=1&prv=OPENXS2S,APPNEXUS,C1EXCHANGE,PULSEPOINT&vsSync=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.guru99.com/performance-testing.html", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/cksync.php?cs=2&vsid=1458548551929089000V10&type=opx&ovsid=d475ef52-aba5-0b00-04b9-f5bdcea65006", "Referer=https://contextual.media.net/checksync.php?&cv=31&cs=2&&cid=8CUQBB2U5&https=1&prv=OPENXS2S,APPNEXUS,C1EXCHANGE,PULSEPOINT&vsSync=1", ENDITEM, 
		LAST);

	web_url("rtset", 
		"URL=https://bh.contextweb.com/bh/rtset?pid=560210&ev=1&rurl=https%3A%2F%2Fcontextual.media.net%2Fcksync.html%3Fcs%3D2%26vsid%3D1458548551929089000V10%26type%3Dppt%26ovsid%3D%25%25VGUID%25%25", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://contextual.media.net/checksync.php?&cv=31&cs=2&&cid=8CUQBB2U5&https=1&prv=OPENXS2S,APPNEXUS,C1EXCHANGE,PULSEPOINT&vsSync=1", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://contextual.media.net/cksync.php?cs=2&vsid=1458548551929089000V10&type=apx&ovsid=1946746445268812343", "Referer=https://contextual.media.net/checksync.php?&cv=31&cs=2&&cid=8CUQBB2U5&https=1&prv=OPENXS2S,APPNEXUS,C1EXCHANGE,PULSEPOINT&vsSync=1", ENDITEM, 
		LAST);

	lr_end_transaction("Clk Second link",LR_AUTO);

	return 0;
}