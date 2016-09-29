function [yb]=coicetotal(choice,name,name2)

if choice == 1

	[sweet,sweetFS]=audioread(name);
	delS=digdelay(sweet,.8,3/8,.25,sweetFS);

	audiowrite(name2,delS,sweetFS);

end

if choice == 2

	[pen15,fs15]=audioread(name);
	flanged=flanger(pen15,.8,5,5,.4,fs15);

	audiowrite(name2,flanged,fs15);

end

if choice == 3
	[hc,hcFS]=audioread(name);
	trem=tremolo(hc,hcFS,4,.7,100,'tri');

	audiowrite(name2,trem,hcFS);

end

if choice == 4

	[wahout,fs]=wah_wah(name);

	audiowrite('out_wah.wav',wahout,fs);

end


