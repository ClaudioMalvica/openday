function showFullScreenImage(buttonValue)
{
    const fullBlackObj = document.getElementsByClassName("full-black")[0];
    fullBlackObj.style.display = "block";

    const imageViewerObj = document.getElementById("image-viewer");
    imageViewerObj.firstElementChild.src = buttonValue;
    imageViewerObj.style.display = "block";
    console.log(buttonValue);
}

function closeImageViewer()
{
    const imageViewerObj = document.getElementById("image-viewer");
    imageViewerObj.style.display = "none";
    const fullBlackObj = document.getElementsByClassName("full-black")[0];
    fullBlackObj.style.display = "none";
}